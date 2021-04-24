#include <stdio.h>

int main(){
    int i,j,k;
    // gotoを使った場合
    for(i=0; i<=10; i++){
        for(j=0; j<=10; j++){
            for(k=0; k<=10; k++){
                if(i==7 && j==7 && k==7){
                    goto out;
                }
            }
        }
    }
    out:
        printf("goto:[%d][%d][%d]\n",i,j,k);

    // breakを使った場合
    for(i=0; i<=10; i++){
        for(j=0; j<=10; j++){
            for(k=0; k<=10; k++){
                if(i==7 && j==7 && k==7){
                    break;
                }
            }
            if(i==7 && j==7 && k==7){
                break;
            }
        }
        if(i==7 && j==7 && k==7){
            break;
        }
    }
    printf("break:[%d][%d][%d]\n",i,j,k);

    return 0;
}