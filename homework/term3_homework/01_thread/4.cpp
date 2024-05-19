#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename RandIt>
void findMaxInRange(RandIt start, RandIt end, std::promise<RandIt>& maxElementPromise) {
    auto maxIt = std::max_element(start, end);
    maxElementPromise.set_value(maxIt);
}

template <typename RandIt>
RandIt getMaxPar(int n, RandIt start, RandIt end) {
    auto length = std::distance(start, end);
    auto partLength = length / n;
    std::vector<std::thread> threads;
    std::vector<std::promise<RandIt>> promises(n);
    std::vector<std::future<RandIt>> futures;

    for (int i = 0; i < n; ++i) {
        promises[i] = std::promise<RandIt>();
        futures.push_back(promises[i].get_future());
        RandIt partStart = start;
        std::advance(partStart, i * partLength);
        RandIt partEnd = (i == n - 1) ? end : partStart;
        std::advance(partEnd, partLength);

        threads.push_back(std::thread(findMaxInRange<RandIt>, partStart, partEnd, std::ref(promises[i])));
    }

    for (auto& t : threads) {
        if (t.joinable()) {
            t.join();
        }
    }

    std::vector<RandIt> maxElements;
    for (auto& f : futures) {
        maxElements.push_back(f.get());
    }

    return *std::max_element(maxElements.begin(), maxElements.end(), 
                             [](const RandIt& a, const RandIt& b { return *a < *b; });
}

int main() {
    
    std::deque<double> d {1.2, 5.1, 8.2, 1.0, 0.2, 5.0, 7.8};
    auto maxIt = getMaxPar(4, d.begin(), d.end()); 
    std::cout << "Maximum value is: " << *maxIt << std::endl;

   
}