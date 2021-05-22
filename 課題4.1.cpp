#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Student{
private:
    // 学生の名前
    string name;
    // 学籍番号
    int studentNumber;
public:
    void setName(string name);
    void setStudentNumber(int studentNumber);
    string getName();
    int getStudentNumber();
    void show();
};

void Student::setName(string name){
    this->name = name;
}

string Student::getName(){
    return this->name;
}

void Student::setStudentNumber(int studentNumber){
    this->studentNumber = studentNumber;
}

int Student::getStudentNumber(){
    return this->studentNumber;
}

void Student::show(){
    cout << this->getName() << "'s student number is " << this->getStudentNumber() << endl;
}

int main(){
    Student student;
    student.setName("Song Hyunseok");
    student.setStudentNumber(33124001);
    cout << student.getName() << endl;
    cout << student.getStudentNumber() << endl;
    student.show();
}

