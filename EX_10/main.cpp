//515021910320  ��� �����С������
#include <iostream>
#include <cstring>
#include "LongLongInt.h"

using namespace std;

int main()
{
           //���Թ��캯��
    string nums;
    int na=0;
    cout<<"������һ��������������a��";
    cin>>nums;
    na=nums.length();
    char num1[na];
    strcpy(num1,nums.c_str());
    LongLongInt a(num1,na);

       //����<<
    cout<<"a="<<a;

 //����=��+
    cout<<"\n��������һ��������������b��";
    cin>>nums;
    int nb=0;
    nb=nums.length();
    char num2[nb];
    strcpy(num2,nums.c_str());
    LongLongInt b(num2,nb);
    LongLongInt c;
    c=a+b;
cout<<"c=a+b="<<c;


   //������=����ʼ��
    LongLongInt d=a;
    cout<<"\n��d=a"<<"\n��d="<<d;

    return 0;
}

