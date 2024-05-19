#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <string>
#include <cctype>


std::mutex mtx;
std::condition_variable cv;
std::string globalString;
bool finished = false;


void readFile(const std::string& fileName) {
    std::ifstream file(fileName);
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::unique_lock<std::mutex> lk(mtx);
        cv.wait(lk, [] { return globalString.empty(); });
        globalString = line;
        lk.unlock();
        cv.notify_one();
    }

    std::unique_lock<std::mutex> lk(mtx);
    finished = true;
    lk.unlock();
    cv.notify_one();
}


void processAndPrint() {
    std::unique_lock<std::mutex> lk(mtx);
    while (!finished || !globalString.empty()) {
        cv.wait(lk, [] { return !globalString.empty() || finished; });
        if (!globalString.empty()) {
            for (char& c : globalString) {
                c = std::toupper(c);
            }
            std::cout << globalString << std::endl;
            globalString.clear();
        }
        lk.unlock();
        cv.notify_one();
        lk.lock();
    }
}

int main() {
    std::thread readerThread(readFile, "invisible_man.txt");
    std::thread processorThread(processAndPrint);

    readerThread.join();
    processorThread.join();

    return 0;
}