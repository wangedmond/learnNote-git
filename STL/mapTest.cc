#include <map>
#include <iostream>
#include <string>
using namespace std;

int main(){
    // init
    std::map<std::string, int>myMap;
    std::map<std::string, int>myMap1{ {"C语言教程",10},{"STL教程",20} };//myMap 容器在初始状态下，就包含有 2 个键值对。
    std::map<std::string, int>myMap2{std::make_pair("C语言教程",10),std::make_pair("STL教程",20)};



    //查询
    cout << myMap2["C语言教程"] << endl;
    map<string,int>::iterator keyFind = myMap2.find("C语言教程");
    if(keyFind!=myMap2.end())
    {
         cout << keyFind->first<< ":"<< keyFind->second << endl;
    }
    for (auto iter = myMap2.begin(); iter != myMap2.end(); ++iter) {
        cout <<"find "<< iter->first << " " << iter->second << endl;
    }
 
    // 增加
    myMap2["Python教程"] = 30;
    map<string,int>::iterator keyAdd = myMap2.find("Python教程升级版");
    if(keyAdd == myMap2.end())
    {
        myMap2["Python教程升级版"] = 3000;
    }
    for (auto iter = myMap2.begin(); iter != myMap2.end(); ++iter) {
        cout <<"add "<< iter->first << " " << iter->second << endl;
    }
 
    // 修改
    myMap2["C语言教程"] = 100;
    map<string,int>::iterator keyModfy = myMap2.find("Python教程");
    if(keyModfy !=myMap2.end())
    {
        keyModfy->second=300;
    }
 
    for (auto iter = myMap2.begin(); iter != myMap2.end(); ++iter) {
        cout << "modify "<<iter->first << " " << iter->second << endl;
    }

    // 删除
    myMap2.erase("C语言教程");
    for (auto iter = myMap2.begin(); iter != myMap2.end(); ++iter) {
        cout <<"del1 "<< iter->first << " " << iter->second << endl;
    }

    
    map<string,int>::iterator key = myMap2.find("STL教程");
    if(key!=myMap2.end())
    {
        myMap2.erase(key);
    }
    for (auto iter = myMap2.begin(); iter != myMap2.end(); ++iter) {
        cout <<"del2 "<< iter->first << " " << iter->second << endl;
    }


    // cout<<"test"<<endl;
    return 0;
}