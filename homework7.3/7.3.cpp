#include <iostream>
#include <string>
#include <vector>

template <typename T>
class Stack{
public:
    void Push(T value);
    T Pop();
private:
    std::vector<T> stack_;
};

template <typename T>
void Stack<T>::Push(T value){
    stack_.push_back(value);
}

template<typename T>
T Stack<T>::Pop(){
    // backでデータをセーブして、pop_backでデータを消す、そしてセーブしたデータをリターン
    T data = stack_.back();
    stack_.pop_back();
    return data;
}

int main(){
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;
    Stack<int> int_stack;
    Stack<string> string_stack;

    for(int i=0;i<10;i++){
        int_stack.Push(i);
    }
    cout << "---int Stack's Value---" << endl;
    for(int i=0; i<10; i++){
        cout << int_stack.Pop() << endl;
    }
    string_stack.Push("hello");
    string_stack.Push("Youkoso");
    string_stack.Push("Nagoya");
    cout << "---string Stack's value---" << endl;
    for(int i=0; i<3; i++)
        cout << string_stack.Pop() << endl;

    return 0;
}