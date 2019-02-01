
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b,c,A,B,x=7,na,nb,nc;      //定义abc分别为电脑随意生成的三个不重复数字（0~9），na,nb,nc为玩家猜测的三个数字，x为剩余机会。

    srand(time(NULL));
    a=rand()%10;
    do b=rand()%10;
        while (b==a);
    do c=rand()%10;
        while (c==a||c==b);

    do
    {
        cout<<"请输入你猜测的数字（还有"<<x<<"次机会）：";
        cin>>na>>nb>>nc;                     //注：每输入一个数字都要输入一个空格。
        A=0;
        B=0;
        if (na==a) A++;
            else if((na==b||na==c)&&na!=nb) B++;        //考虑到输入的三个数字有可能相同，在这种情况下，若有A则其余B均不计，若无A有B则只计入一个B，这样的话，其修正如左侧原代码所示。
        if (nb==b) A++;
            else if((nb==a||nb==c)&&nb!=nc) B++;
        if (nc==c) A++;
            else if((nc==b||nc==a)&&nc!=na) B++;
        if(A!=3)    cout<<A<<"A"<<B<<"B"<<endl;
        x--;
    }while(x>0&&A!=3);
    if (A==3)    cout<<"恭喜，你猜对了。";
    else    cout<<"很遗憾，你没有在规定次数内猜对。答案是"<<a<<b<<c<<endl;

    return 0;
}
