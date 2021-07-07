#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Person{
private:
    std::string name;
    int age;
public:
    Person(std::string name = "", int age = 20){
        this->name = name;
        this->age = age;
    }
    std::string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};

bool compare(Person A, Person B){
    return A.getAge() < B.getAge();
}

int main(){
    std::vector<Person> p;
    p.push_back(Person("Song", 35));
    p.push_back(Person("Yamamoto", 25));
    p.push_back(Person("kim", 30));
    p.push_back(Person("Sam",40));
    p.push_back(Person("aragaki",22));

    std::sort(p.begin(), p.end(), compare);

    for(int i=0; i<5 ;i++){
        std::cout << "name : " << p[i].getName() << "age : " << p[i].getAge() << std::endl;
    }
}