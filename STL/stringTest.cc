#include <map>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    std::string str = "hello world";
    std::cout<< "str is "<< str <<" sizeof is "<< sizeof(str) << " len is "<< str.length()<<" "<<str.size() <<" "<< std::endl;

    // string 转换为 char
    // strlen was not declared in thos scope -> include <cstring>
     const char* strChar = str.c_str();
     std::cout<< "strChar is "<< strChar <<" sizeof is "<< sizeof(strChar)<< " len is "<< strlen(strChar) << std::endl;

    //  字符串比较
    std::string str1 = "hello world1";

    if (0 == str.compare(str1))
    {
        cout << "equal" << endl;
    }else{
        cout << "not equal" << endl;
    }

    // string对象判空
    if (str1.empty())
    {
        cout << "str is empty." << endl;
    }else{
        cout << "str is not empty." << endl;
    }

    // char*、char[]转换为string
    const char* pszName = "liitdar";
    char pszCamp[] = "alliance";
 
    string strName;
    string strCamp;
 
    strName = pszName;
    strCamp = pszCamp;
 
    cout << "strName is: " << strName << " sizeof is "<< sizeof(strName) << " len is " << strName.length() << endl;
    cout << "strCamp is: " << strCamp << " sizeof is "<< sizeof(strCamp) << " len is " << strCamp.length() << endl;

    // string类的find方法
    string strFindTest = "hello world";
    string strFind = "h";
    size_t nLoc = strFindTest.find(strFind);
    if (nLoc != string::npos)
    {
        cout << "nLoc is: " << nLoc << endl;
    }else{
        cout << "not find " << nLoc << endl;
    }

    // string类的insert方法
    string strInsertBefore = "hello";
    string strInsert = " world";
    strInsertBefore.insert(5, strInsert);
    cout<<"after insert "<<strInsertBefore<<endl;

    // int类型转为string类的方法
    // 编译时报错：‘to_string’ is not a member of ‘std’,编译时在编译命令上加上 -std=c++11
    int num = 1;
    string num2str = to_string(num);
    cout<<"num2str is "<< num2str<<endl;




}