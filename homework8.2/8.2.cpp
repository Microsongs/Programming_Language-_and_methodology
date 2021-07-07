#include <iostream>
#include <algorithm>
#include <vector>

auto print(int n){
    std::cout << n << std::endl;
}

bool findIt(int n){
    return n%2 == 0;
}

int main(){
    using std::cout;
    
    std::vector<int> v;
    
    for(int i=1; i<=5; i++){
        v.push_back(i*10);
    }

    // (1)

    // lambda
    std::for_each(v.begin(), v.end(), [](int n){cout<<n<<std::endl;});

    // no lambda
    std::for_each(v.begin(),v.end(),print);

    // (2)

    // lambda
    auto result = std::find_if(v.begin(), v.end(), [](int n){
        return n%2 == 0;
    });
    if(result != v.end()){
        cout << "The first even number in this list is : " << *result << std::endl;
    }
    else{
        cout << "the list contains no even num" << std::endl;
    }

    // no lambda
    auto result2 = std::find_if(v.begin(),v.end(),findIt);
    if(result2 != v.end()){
        cout << "The first even number in this list is : " << *result2 << std::endl;
    }
    else{
        cout << "the list contains no even num" << std::endl;
    }

    return 0;
}