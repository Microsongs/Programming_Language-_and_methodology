#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    // ページ20の動作
    std::vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    std::sort(v.begin(), v.end());
    for(auto x:v){
        std::cout << x << std::endl;
    }

    // intをdoubleで変換
    std::vector<double> v2;
    v2.push_back(3.14f);
    v2.push_back(15.92f);
    v2.push_back(96.33232323f);
    std::sort(v2.begin(), v2.end());
    for(auto x:v2){
        std::cout << x << std::endl;
    }
    return 0;
}