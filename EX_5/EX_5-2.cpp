
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int getSixteen (char a[]);
int getEight (char a[]);
int getTen (char a[]);

int main()
{
    char a[50];
    int A=0;
    cout<<"������һ��������";
    cin>>a;

    if (a[0]=='0')
        if (a[1]=='x')
        {
            A=getSixteen(a);
            cout<<"�������ʽΪʮ������"<<endl;
            cout<<"��ʮ���������"<<A<<endl;
            cout<<"�԰˽��������"<<oct<<A<<endl;
            cout<<"��ʮ�����������"<<hex<<A<<endl;
        }
        else
        {
            A=getEight(a);
            cout<<"�������ʽΪ�˽���"<<endl;
            cout<<"��ʮ���������"<<A<<endl;
            cout<<"�԰˽��������"<<oct<<A<<endl;
            cout<<"��ʮ�����������"<<hex<<A<<endl;
            }
    else
        {
            A=getTen(a);
            cout<<"�������ʽΪʮ����"<<endl;
            cout<<"��ʮ���������"<<a<<endl;
            cout<<"�԰˽��������"<<oct<<A<<endl;
            cout<<"��ʮ�����������"<<hex<<A<<endl;
            }

    return 0;
}

int getSixteen (char a[])
{
    int i,n,A=0,b[50]={0};                     //n�洢�ַ�������Чλ���ĳ��ȣ���ȥǰ��λ�ַ���b��a�е��ַ���ת����һά����
    double x;
    for (i=2;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='f')    b[i]=a[i]-'a'+10;
        if(a[i]>='A'&&a[i]<='F')    b[i]=a[i]-'A'+10;
        if(a[i]>='0'&&a[i]<='9')    b[i]=a[i]-'0';
    }
    n=strlen(a)-2;
    for (i=2;a[i]!='\0';i++)
    {
        x=pow(16,n-i+1);
        A+=b[i]*x;
    }
    return A;
}

int getEight (char a[])
{
    int i,n,A=0;
    double x;

    n=strlen(a)-1;
    for(i=1;a[i]!='\0';i++)
    {
        x=pow(8,n-i);
        A+=(a[i]-'0')*x;
    }
    return A;
}

int getTen (char a[])
{
    int i,n,A=0;
    double x;

    n=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        x=pow(10,n-i-1);
        A+=(a[i]-'0')*x;
    }
    return A;
}
