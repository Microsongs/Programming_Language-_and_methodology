#include <stdio.h>

int main(){

    int i=0;
    for(i=1; i<=100; i++){
        // 分岐を入れる
        if (i%3 == 0 && i%5 == 0){
            printf("Fizz Buzz");
            goto success;
        }
        if (i%3 == 0){
            printf("Fizz");
            goto success;
        }
        if(i%5 == 0){
            printf("Buzz");
            goto success;
        }
        printf("%d",i);
        success:
            printf(", ");
    }

    return 0;
}