class Stack{
private:
    int array[50];
    int pos;
public:
    // constructor
    Stack();
    // data push
    void push(int x);
    // data pop
    int pop();
    // data show
    void show();
};