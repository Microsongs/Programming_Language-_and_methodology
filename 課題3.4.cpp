#include <stdio.h>

// クラス
struct Person
{
    char *name;
    int age;
};

// 人の名前を設定
void setName(struct Person* person, char* inputName)
{
    person->name = inputName;
}

void setAge(struct Person* person, int inputAge)
{
    person->age = inputAge;
}

void getName(struct Person* person)
{
    printf("%s\n",person->name);
}

void getAge(struct Person* person){
    printf("%d\n",person->age);
}

int main(void)
{
    struct Person person[2];
    setName(&person[0], "Taro");
    setAge(&person[0], 21);
    setName(&person[1], "Hanako");
    setAge(&person[1], 20);
    for(int i=0; i<2; i++){
        getName(&person[i]);
        getAge(&person[i]);
    }
}