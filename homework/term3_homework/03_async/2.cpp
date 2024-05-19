#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include <algorithm>
#include <cstdint>

uint64_t getMaxPar(int n, const std::vector<uint64_t>& v)
 {
  
    std::vector<std::future<uint64_t>> futures;
    size_t length = v.size() / n;
    for (int i = 0; i < n; ++i) 
    {
        size_t start = i * length;
        size_t end = (i == n - 1) ? v.size() : (i + 1) * length;
        futures.push_back(std::async(std::launch::async, [start, end, &v 
        {
            return *std::max_element(v.begin() + start, v.begin() + end);
        };
    }

 
    uint64_t max_value = 0;
    for (auto& f : futures) 
    {
        uint64_t result = f.get();
        max_value = std::max(max_value, result);
    }
    return max_value;
}

int main() {
 

    auto start = std::chrono::high_resolution_clock::now();


    uint64_t m = getMaxPar(4, numbers); 
    cout << "Maximum = " << m << endl;

    auto end = std::chrono::high_resolution_clock::now();
    cout << "Time to calculate max (parallel) = " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
         << " milliseconds." << endl;

  

    return 0;
}
