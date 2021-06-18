#include <stdio.h>
#include <iostream>
#include <string>

using std::string;

class Comparable{
public:
    virtual void print() = 0;
    virtual bool LTE(Comparable* a) = 0;
};

class Double : public Comparable{
private:
    double val;
public:
    Double(double v){
        val = v;
    }
    bool LTE(Comparable* a){
        if(val <= (static_cast<Double*>(a) -> val))
            return true;
        else
            return false;
    }
    void print(){
        printf("%f\n",val);
    }
};

class Char : public Comparable{
private:
    char val;
public:
    Char(char v){
        val = v;
    }
    bool LTE(Comparable *a){
        if(val <= (static_cast<Char*>(a) -> val))
            return true;
        else
            return false;
    }
    void print(){
        printf("%c\n",val);
    }
};

class Person : public Comparable{
private:
    string name;
    int age;
public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    bool LTE(Comparable *a){
        if(age <= (static_cast<Person*>(a) -> age))
            return true;
        else
            return false;
    }
    void print(){
        std::cout << "name : " << this->name << std::endl << "age : " << this->age << std::endl;
    }
};

Comparable* x[10];

void find_min(){
    Comparable* min = x[0];
    for(int i=0; i<10; i++){
        // x[i] -> print();
        if(!min->LTE(x[i]))
            min = x[i];
    }
    min->print();
}



int main(){
    x[0] = new Person("alex",10);
    x[1] = new Person("Mincho", 22);
    x[2] = new Person("yamamoto", 25);
    x[3] = new Person("Yongjun", 26);
    x[4] = new Person("Jake", 9);
    x[5] = new Person("Sato", 33);
    x[6] = new Person("Jaeho", 50);
    x[7] = new Person("Daehyun", 17);
    x[8] = new Person("Song", 33);
    x[9] = new Person("minamino", 29);

    find_min();
}
