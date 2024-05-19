#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <cstdint>


void findMaxSegment(const std::vector<uint64_t>& v, size_t start, size_t end, uint64_t& maxResult) {
    uint64_t localMax = v[start];
    for (size_t i = start; i < end; ++i) {
        if (v[i] > localMax) {
            localMax = v[i];
        }
    }
    maxResult = localMax;
}

// Многопоточная версия 
uint64_t getMaxPar(int n, const std::vector<uint64_t>& v) {
    size_t length = v.size();
    size_t segmentSize = length / n;
    std::vector<uint64_t> maxResults(n);
    std::vector<std::thread> threads;

        for (int i = 0; i < n; ++i) {
        size_t start = i * segmentSize;
        size_t end = (i == n - 1) ? length : start + segmentSize;
        threads.emplace_back(findMaxSegment, std::cref(v), start, end, std::ref(maxResults[i]));
    }


    for (auto& t : threads) {
        t.join();
    }


    return *std::max_element(maxResults.begin(), maxResults.end());
}

int main() {


    auto startPar = std::chrono::high_resolution_clock::now();


    uint64_t mPar = getMaxPar(4, numbers); 
    cout << "Maximum (parallel) = " << mPar << endl;

    auto endPar = std::chrono::high_resolution_clock::now();
    cout << "Time to calculate max (parallel) = " << std::chrono::duration_cast<std::chrono::milliseconds>(endPar - startPar).count()
         << " milliseconds." << endl;
}
