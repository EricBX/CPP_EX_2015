
#include <iostream>

using namespace std;

int main()
{
    int n,m;                           //����������Ϊn���ȵ�������Ϊm
    double x,y;                   //�輦������Ϊx���õ�����Ϊy

    cout<<"������n,m:";
    cin>>n>>m;
    cout<<endl;

    x=(4*n-m)/2.0;
    y=(m-2*n)/2.0;

    if (x>0&&y>0&&x==(int)x&&y==(int)y)             //�ж�x��y�Ƿ�Ϊ������
        cout<<"����"<<x<<"���ã�"<<y<<endl;
    else
        cout<<"�޽�"<<endl;

    return 0;
}
