#include <stdio.h>

int main(){

    int i=0;
    for(i=1; i<=100; i++){
        // 分岐を入れる
        if (i%3 == 0 && i%5 == 0){
            printf("Fizz Buzz, ");
        }
        else if (i%3 == 0){
            printf("Fizz, ");
        }
        else if(i%5 == 0){
            printf("Buzz, ");
        }
        else{
            printf("%d, ",i);
        }
    }

    return 0;
}