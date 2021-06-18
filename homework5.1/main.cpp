#include <iostream>
#include "MyClass.hpp"

int main(){
    MyClass class1;
    MyClass class2(10, 20, 2, 4);
    class1.print();
    class2.print();
    return 0;
}