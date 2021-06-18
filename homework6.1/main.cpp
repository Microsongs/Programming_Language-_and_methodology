#include <stdio.h>

class Object{
public:
    virtual double area() = 0;
};

// 継承
class Rectangle : public Object{
private:
    double x;
    double y;
public:
    Rectangle(double x, double y){
        this->x = x;
        this->y = y;
    }
    double area(){
        return x*y;
    }
};

// 継承
class Circle : public Object{
private:
    double x;
    double y;
public:
    Circle(double x, double y){
        this->x = x;
        this->y = y;
    }
    double area(){
        return x*y/2.0;
    }
};

int main(){
    Rectangle rect(20.55, 10.23);
    Circle cir(30.22, 20.11);
    printf("%lf\n",rect.area());
    printf("%lf\n",cir.area());

    return 0;
}