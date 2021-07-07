#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cstdlib>

int main(){
    srand((unsigned int)time(NULL));
    std::vector<double> myVector;
    for(int i=0; i<100; i++){
        myVector.push_back(rand());
    }
    std::cout << "no Sort" << std::endl;
    int i = 0;
    for(auto k : myVector){
        std::cout << k << " ";
        if(++i % 20 == 0)
            std::cout << "\n";
    }

    std::sort(myVector.begin(), myVector.end());
    std::cout << "Sort" << std::endl;
    i = 0;
    for(auto k : myVector){
        std::cout << k << " ";
        if(++i % 20 == 0)
            std::cout << "\n";
    }

    return 0;
}