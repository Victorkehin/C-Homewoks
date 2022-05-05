/*Create a vector that is filled with 100 random numbers.*/
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // First create an instance of an engine.
    random_device rnd_device;
    // Specify the engine and distribution.
    mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    uniform_int_distribution<int> dist {1, 100};
    
    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);
               };

    vector<int> vec(10);
    generate(begin(vec), end(vec), gen);
    
    // Optional
    for (auto i : vec) {
        cout << i << " ";
    }
    

}