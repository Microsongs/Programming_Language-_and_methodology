#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(){
    this->sit = 10;
    this->table = 10;
    this->projector = 1;
    this->blackboard = 1;
}

MyClass::MyClass(int sit, int table, int projector,int blackboard){
    this->sit = sit;
    this->table = table;
    this->projector = projector;
    this->blackboard = blackboard;
}

void MyClass::print(){
    using std::cout;
    using std::endl;
    cout << "sit : " << this->sit << endl;
    cout << "table : " << this->table << endl;
    cout << "projector : " << this->projector << endl;
    cout << "blackboard : " << this->blackboard << endl;
}