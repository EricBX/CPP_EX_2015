
#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d;

    cout<<"������һ��5λ��������";
    cin>>x;
    cout<<endl;
                                          //�ֱ���a��b��c��d���x����ǧ��ʮ����λ��
    a=x/10000;
    b=(x-a*10000)/1000;
    d=x%10;
    c=((x-d)/10)%10;
    //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;         //����ʱ���õ������

    if (a==d&&b==c)             //�ж�x�Ƿ��ǻ�����
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
