
#include <iostream>

using namespace std;

const int MAXSIZE=1000;

int main()
{
    int k,n,i,m;
    bool array[MAXSIZE]={0};                            //定义布尔型一维数组存储灯的开关状态

    cin>>n>>k;

    for(i=1;i<=k;i++)
        for(m=1;m<=(n/i);m++)
            if(array[m*i-1]==1)    array[m*i-1]=0;
                else    array[m*i-1]=1;                                          //执行开关灯

    for(i=1;i<=n;i++)
        if(array[i-1]==1)     cout<<i<<" ";                         //输出结果

    return 0;
}
