#include <stdio.h>

class IntArray{
protected:
    int size;
    int* array;
public:
    IntArray(int _size){
        size = _size;
        array = new int[size];
        for(int i=0; i<size; i++){
            array[i] = 0;
        }
    }
    ~IntArray(){
        delete[] array;
        printf("destructor called\n");
    }
    void print_array(){
        for(int i=0; i<size; i++){
            printf("%d: %d\n",i,array[i]);
        }
    }
};

class InheritanceArray : public IntArray{
public:
    InheritanceArray(int _size) : IntArray(_size){

    }
    // 配列の数値を設定
    void set(){
        for(int i=0; i<size; i++){
            printf("data Input : ");
            scanf("%d",&array[i]);
        }
    }
    // 配列の数値の合計をリターン
    int sum(){
        int sum = 0;
        for(int i=0; i<size; i++){
            sum += array[i];
        }
        return sum;
    }
};

int main(){
    IntArray a(4);
    a.print_array();

    InheritanceArray b(5);
    b.set();
    b.print_array();
    printf("sum : %d\n",b.sum());
}
