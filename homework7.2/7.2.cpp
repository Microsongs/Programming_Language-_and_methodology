#include <iostream>
#include <string>

template<typename T>
T Max(T x, T y){
    if(x > y)
        return x;
    else
        return y;
}

int main(){
    using std::cout;
    using std::endl;
    // int
    int a=10, b=20;
    cout << "int : " << Max<int>(a,b) << endl;
    // char
    char c = 'c', d = 'D';
    cout << "char : " << Max<char>(c,d) << endl;
    // double
    double e = 3.1415, f = 2.74;
    cout << "double : " << Max<double>(e,f) << endl;

    return 0;
}