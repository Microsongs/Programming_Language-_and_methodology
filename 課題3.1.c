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

int main(){
    stack.pos = 0;
    push(1);push(2);push(3);
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
}