
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b,c,A,B,x=7,na,nb,nc;      //����abc�ֱ�Ϊ�����������ɵ��������ظ����֣�0~9����na,nb,ncΪ��Ҳ²���������֣�xΪʣ����ᡣ

    srand(time(NULL));
    a=rand()%10;
    do b=rand()%10;
        while (b==a);
    do c=rand()%10;
        while (c==a||c==b);

    do
    {
        cout<<"��������²�����֣�����"<<x<<"�λ��ᣩ��";
        cin>>na>>nb>>nc;                     //ע��ÿ����һ�����ֶ�Ҫ����һ���ո�
        A=0;
        B=0;
        if (na==a) A++;
            else if((na==b||na==c)&&na!=nb) B++;        //���ǵ���������������п�����ͬ������������£�����A������B�����ƣ�����A��B��ֻ����һ��B�������Ļ��������������ԭ������ʾ��
        if (nb==b) A++;
            else if((nb==a||nb==c)&&nb!=nc) B++;
        if (nc==c) A++;
            else if((nc==b||nc==a)&&nc!=na) B++;
        if(A!=3)    cout<<A<<"A"<<B<<"B"<<endl;
        x--;
    }while(x>0&&A!=3);
    if (A==3)    cout<<"��ϲ����¶��ˡ�";
    else    cout<<"���ź�����û���ڹ涨�����ڲ¶ԡ�����"<<a<<b<<c<<endl;

    return 0;
}
