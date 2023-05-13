#include <map>
#include <iostream>
#include <string>
#include <cstring>
#include<vector>
#include <algorithm>

using namespace std;
bool compare(int a,int b) 
{ 
    return a> b; //升序排列，如果改为return a>b，则为降序 
} 
int main(){

    // push_back pop_back
    vector<int>obj;//创建一个向量存储容器 int

    std::cout<<"init vector"<<std::endl;
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

    std::cout<<"after pop_back"<<std::endl;
    for(auto i:obj){
        std::cout<<i<<std::endl;
    }

    // clear
    obj.clear();
    std::cout<<"after clear size is"<<obj.size()<<std::endl;

    // sort
    obj.push_back(1);
    obj.push_back(3);
    obj.push_back(2);
    sort(obj.begin(),obj.end());//从小到大
    cout<<"从小到大:"<<endl;
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<",";  
    } 
    cout<<"\n";
    cout<<"从大到小:"<<endl;
    reverse(obj.begin(),obj.end());//从大到小 
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<",";
    }
    cout<<endl;

    sort(obj.begin(),obj.end(),compare);//从大到小 
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<",";
    }
    cout<<endl;

    // query
    obj.clear();
    for(int i=0;i<10;i++)
    {
        obj.push_back(i);   
    } 
    for(int i=0;i<obj.size();i++)//方法一 
    {
        cout<<obj[i]<<" ";
    }
    cout<<endl; 
    cout<<"利用迭代器：" ;
    vector<int>::iterator it;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素 
    for(it=obj.begin();it!=obj.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; 
    for(auto i:obj){
        std::cout<<i<<" ";
    }
    cout<<endl; 
}