#include <stdio.h>
#include "stack.hpp"

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.show();
    printf("%d\n",s.pop());
    printf("%d\n",s.pop());
    printf("%d\n",s.pop());
    s.show();
}