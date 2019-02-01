//515021910320  李宝星 任意大小整型数
#include <iostream>
#include <cstring>
#include "LongLongInt.h"

using namespace std;

int main()
{
           //测试构造函数
    string nums;
    int na=0;
    cout<<"请输入一个任意大的正整数a：";
    cin>>nums;
    na=nums.length();
    char num1[na];
    strcpy(num1,nums.c_str());
    LongLongInt a(num1,na);

       //测试<<
    cout<<"a="<<a;

 //测试=和+
    cout<<"\n请输入另一个任意大的正整数b：";
    cin>>nums;
    int nb=0;
    nb=nums.length();
    char num2[nb];
    strcpy(num2,nums.c_str());
    LongLongInt b(num2,nb);
    LongLongInt c;
    c=a+b;
cout<<"c=a+b="<<c;


   //测试用=来初始化
    LongLongInt d=a;
    cout<<"\n令d=a"<<"\n则d="<<d;

    return 0;
}

