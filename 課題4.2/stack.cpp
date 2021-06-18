#include "stack.hpp"
#include <stdio.h>

// constructor
Stack::Stack(){
    pos = 0;
}

// データをpush
void Stack::push(int x){
    array[pos++] = x;
}

int Stack::pop(){
    return array[--pos];
}

void Stack::show(){
    printf("stack cnt : %d\n",pos);
}