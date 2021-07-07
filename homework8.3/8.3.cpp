#include <iostream>
#include <functional>

double f(double a,int n){
    if(n == 1)
        return 1.0;
    else
        return a * f(a,n-1);
}

int main(){
    std::cout << f(5.0,10) << std::endl;

    return 0;
}