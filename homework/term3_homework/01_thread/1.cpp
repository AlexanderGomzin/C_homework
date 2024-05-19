#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
using namespace std::chrono_literals; 
using namespace std; 

std::mutex m;

void func(int q)
{
    m.lock();

    cout << "Thread #" << q << " started." << endl;

    m.unlock();

    std::this_thread::sleep_for(q*1s);

    std::cout << "Thread #" << q << " finished." << std::endl;

}

int main()
{
    int n;

    std::cin >> n;

    std::vector<std::thread> threads(n);

    for (int i = 0; i < n; i++)
    {
        threads[i] = std::thread(func, i + 1);
    }

    for (auto& t : threads)
    {
        t.join();
    }



    return 0;
}