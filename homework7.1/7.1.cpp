#include <iostream>
#include <string>

int stringLen(std::string string){
    int i = 0;
    for(i=0; i<string.length(); i++);
    return i;
}

int main(){
    // サンプールコードの動作
    std::string a("hello");
    std::string b,c;
    b = "world\n";
    c = a+b;
    std::cout << b;
    std::cout << c;
    // 文字列の比較
    std::string d("hello");
    if(a == b)
        std::cout << "a = b\n";
    else
        std::cout << "a != b\n";
    if(a == d)
        std::cout << "a = d\n";
    else
        std::cout << "a != d\n";

    //　文字列の連結
    std::string k = "Nagoya Institute ";
    std::string j = "of Technology";
    std::string e = k + j;
    std::cout << "e : " << e << std::endl;
    // 関数の利用
    std::cout << stringLen(e);

    return 0;
}