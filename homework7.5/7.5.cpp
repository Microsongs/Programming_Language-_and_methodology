#include <iostream>
#include <string>
#include <map>

int main(){
    // マップを作成
    std::map<std::string, int> map;

    // 追加
    map.insert(std::pair<std::string, int>("hello",50));
    map["2"] = 40;

    // 持ってくる
    int a = map["hello"];
    int b = map["2"];

    std::cout << a << " " << b << std::endl;
    
    // 修正
    map["hello"] = 2147483;
    map["2"] = 968;

    std::cout << a << " " << b << std::endl;

    std::cout << "map's size : " << map.size() << std::endl;

    //削除
    map.erase("hello");
    map.erase(map.find("2"));
    
    if(map.empty())
        std::cout << "map is empty" << std::endl;
    else
        std::cout << "map have some items" << std::endl;

    return 0;
}