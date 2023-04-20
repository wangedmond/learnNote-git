#include <map>
#include <iostream>
#include <string>
#include <cstring>
#include<vector>
using namespace std;
int main(){

    // push_back pop_back
    vector<int>obj;//创建一个向量存储容器 int
    for(int i=0;i<10;i++) // push_back(elem)在数组最后添加数据 
    {
        obj.push_back(i);
        cout<<obj[i]<<",";    
        if(i==9){
            cout<<endl;
        }
    }
    for(int i=0;i<5;i++){
        obj.pop_back();
    }

    for(auto i:obj){

    }
}