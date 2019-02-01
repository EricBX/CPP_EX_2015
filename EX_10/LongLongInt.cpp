#include<iostream>
#include<cstring>
#include "LongLongInt.h"
using namespace std;

LongLongInt::LongLongInt():n(n)   //Ĭ�Ϲ��캯��
{
    a=new char[1];
    a[0]=0;
}

LongLongInt::LongLongInt(const char *num, int na):n(na)        //���캯��
{
    a=new char[na];
    strcpy(a,num);
}

LongLongInt LongLongInt::operator+(const LongLongInt &b)          //���ؼӷ�����
{


    int i=0,na=n, nb=b.n, nc;
    char ar[na],br[nb];
    for (i=0;i<=na-1;i++)   ar[i]=a[na-1-i];    ar[na]='\0';
    for (i=0;i<=nb-1;i++)   br[i]=b.a[nb-1-i];  br[nb]='\0';
    nc=(na>=nb)?na:nb;
    char cr[nc+1];

    int temp=0,ai=0,bi=0,ci=0;
    if(na>=nb)
    {
        for(i=0;i<=nb-1;i++)
        {
            ai=ar[i]-'0';
            bi=br[i]-'0';
            ci=(ai+bi+temp)%10;
            temp=(ai+bi+temp)/10;
            cr[i]=ci+'0';
        }
        if(i<=na-1)
        {
            for(;i<=na-1;i++)
            {
                ai=ar[i]-'0';
                ci=(ai+temp)%10;
                temp=(ai+temp)/10;
                cr[i]=ci+'0';
            }
        }
    }
    else
    {
        for(i=0;i<=na-1;i++)
        {
            bi=br[i]-'0';
            ai=ar[i]-'0';
            ci=(ai+bi+temp)%10;
            temp=(ai+bi+temp)/10;
            cr[i]=ci+'0';
        }
        if(i<=nb-1)
        {
            for(;i<=nb-1;i++)
            {
                bi=br[i]-'0';
                ci=(bi+temp)%10;
                temp=(bi+temp)/10;
                cr[i]=ci+'0';
            }
        }
    }
    if(temp!=0) {
        cr[nc]=temp+'0';
        cr[nc+1]='\0';}
    else cr[nc]='\0';

    nc=strlen(cr);

    char *cp;
    cp=new char [nc];

    for(i=0;i<=nc-1;i++)    cp[i]=cr[nc-1-i];   cp[nc]='\0';
    LongLongInt c(cp,nc);
    return c;
}

ostream& operator<<(ostream &os, const LongLongInt&r)    //����<<����
{
    cout<<r.a;
    return os;
}

LongLongInt& LongLongInt::operator=(const LongLongInt &b)     //���ظ�ֵ������ĺ���
{
    if(this==&b) return *this;
    if(this!=NULL)  delete [] a;
    n=b.n;
    a=new char[n];
    strcpy(a,b.a);
    return *this;
}
