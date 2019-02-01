
#include <iostream>
#include <cstring>
#include "LongLongInt.h"

using namespace std;

int main()
{
           //测试构造函数
    string nums;
    int na=0;
    cout<<"请输入一个任意大的正整数：";
    cin>>nums;
    na=nums.length();
    char num1[na];
    strcpy(num1,nums.c_str());
    LongLongInt a(num1,na);

       //测试输出函数
    cout<<"刚输入的数为：";
    a.display();

      //测试加法函数
    cout<<"\n请输入另一个任意大的正整数b：";
    cin>>nums;
    int nb=0;
    nb=nums.length();
    char num2[nb];
    strcpy(num2,nums.c_str());
    LongLongInt b(num2,nb);
    LongLongInt c;
    c=a.add(b);//bug：当输入的a是八位数（或16位数、24位数……好像只要是8的倍数都有问题），b的位数<=a的位数时，程序终止……报错
    cout<<"c=a+b=";
    c.display();

    //测试拷贝构造函数
    cout<<"\n令d=a \n则d=";
    LongLongInt d(a);
    d.display();
    return 0;
}

