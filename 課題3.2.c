#include <stdio.h>
#define STACK_SIZE 50
struct Stack{
    int array[STACK_SIZE];
    int pos;
};
struct Stack stack;

void push(int num){
    stack.array[stack.pos++] = num;
}

int pop(){
    return stack.array[--stack.pos];
}

void add(){
    // 逆ポーランド => 後位表技法
    int temp = pop() + pop();
    push(temp);
    printf("%d\n",temp);
}

int main(){
    stack.pos = 0;
    
    push(1);
    push(2);
    push(3);
    
    add();
    add();
}