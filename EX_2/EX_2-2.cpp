
#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d;

    cout<<"请输入一个5位正整数：";
    cin>>x;
    cout<<endl;
                                          //分别用a、b、c、d存放x的万、千、十、个位数
    a=x/10000;
    b=(x-a*10000)/1000;
    d=x%10;
    c=((x-d)/10)%10;
    //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;         //检验时会用到的语句

    if (a==d&&b==c)             //判断x是否是回文数
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
