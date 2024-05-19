#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
using namespace std::chrono_literals; 
using namespace std; 



void func(int n)
{

    if(n==0)
    {

        return;
    }

    cout << "Thread #" << n << " started." << endl;

    

    std::this_thread::sleep_for(200ms);

    std::thread t(func,n-1);

    std::this_thread::sleep_for(200ms);

    std::cout << "Thread #" << n << " finished." << std::endl;

    t.join();

        


}

int main()
{

    int n;

    std::cin >> n;

    std::thread t(func,n);


    t.join();

    return 0;
}