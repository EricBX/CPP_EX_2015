
#include <iostream>
#include <cstring>
#include "LongLongInt.h"

using namespace std;

int main()
{
           //���Թ��캯��
    string nums;
    int na=0;
    cout<<"������һ����������������";
    cin>>nums;
    na=nums.length();
    char num1[na];
    strcpy(num1,nums.c_str());
    LongLongInt a(num1,na);

       //�����������
    cout<<"���������Ϊ��";
    a.display();

      //���Լӷ�����
    cout<<"\n��������һ��������������b��";
    cin>>nums;
    int nb=0;
    nb=nums.length();
    char num2[nb];
    strcpy(num2,nums.c_str());
    LongLongInt b(num2,nb);
    LongLongInt c;
    c=a.add(b);//bug���������a�ǰ�λ������16λ����24λ����������ֻҪ��8�ı����������⣩��b��λ��<=a��λ��ʱ��������ֹ��������
    cout<<"c=a+b=";
    c.display();

    //���Կ������캯��
    cout<<"\n��d=a \n��d=";
    LongLongInt d(a);
    d.display();
    return 0;
}

