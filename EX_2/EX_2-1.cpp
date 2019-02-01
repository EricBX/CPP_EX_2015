
#include <iostream>

using namespace std;

int main()
{
    int n,m;                           //鸡兔总数量为n，腿的总数量为m
    double x,y;                   //设鸡的数量为x，兔的数量为y

    cout<<"请输入n,m:";
    cin>>n>>m;
    cout<<endl;

    x=(4*n-m)/2.0;
    y=(m-2*n)/2.0;

    if (x>0&&y>0&&x==(int)x&&y==(int)y)             //判断x，y是否为正整数
        cout<<"鸡："<<x<<"，兔："<<y<<endl;
    else
        cout<<"无解"<<endl;

    return 0;
}
