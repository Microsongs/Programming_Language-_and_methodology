#include <iostream>
#include <algorithm>
#include <functional>



int main(){
    using std::cout;
    // (1)
    int a = 10;
    int b = 20;
    auto result = [](int c, int d) -> int{return c+d; };
    cout << result(a,b) << std::endl;
    // (2)
    auto print = [](int n){
        for(int i=0; i<n; i++){
            cout<<"A ";
        }
    };
    print(3);
    cout << "\n";
    print(5);

    return 0;
}