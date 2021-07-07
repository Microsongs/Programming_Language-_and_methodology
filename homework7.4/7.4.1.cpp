#include <iostream>
#include <vector>
#include <string>

int main(){
    // ページ19の動作
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0; i<3; i++){
        std::cout << v[i] << std::endl;
    }

    // stringで変換
    std::vector<std::string> v2;
    v2.push_back("my ");
    v2.push_back("major ");
    v2.push_back("computer ");
    for(int i=0; i<3; i++){
        std::cout << v2[i] << std::endl;
    }
}