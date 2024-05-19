#include <mutex>
#include <queue>
#include <optional>
#include <condition_variable>

template <typename T>
class ThreadSafeQueue {
private:
    std::queue<T> queue;
    mutable std::mutex mtx;
    std::condition_variable cv;

public:
   
    void push(const T& value) {
        std::lock_guard<std::mutex> lock(mtx);
        queue.push(value);
        cv.notify_one();
    }

    std::optional<T> pop() {
        std::unique_lock<std::mutex> lock(mtx);
        if (queue.empty()) {
            return {}; 
        }
        T value = queue.front();
        queue.pop();
        return value;
    }


    bool empty() const {
        std::lock_guard<std::mutex> lock(mtx);
        return queue.empty();
    }
};

int main() {

    ThreadSafeQueue<int> tsQueue;


    tsQueue.push(1);
    tsQueue.push(2);


    auto item = tsQueue.pop();
    if (item) {
        std::cout << "Popped: " << *item << std::endl;
    } else {
        std::cout << "Queue is empty" << std::endl;
    }



    return 0;
}