
#include <iostream>

using namespace std;

int main()
{
    int a,i,n,an,Sum=0;            //求和的值为Sum,an用来储存求和过程中的每个元素（比如a,aa,aaa……）
    cout<<"Input a,n:";
    cin>>a>>n;
    an=a;

    for(i=1;i<=n;i++)
    {
        Sum+=an;
        an+=a*10;
        a*=10;
    }
    cout<<"Sum="<<Sum;

    return 0;
}
