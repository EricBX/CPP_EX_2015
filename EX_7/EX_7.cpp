
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
    int i,j;
    char *p=new char [30];                  //定义动态字符串
    for (i=1;i<argc;i++)                           //冒泡排序法
    {
        bool flag=false;
        for( j=1;j<argc-i;j++)
        {
            if(strcmp(argv[j],argv[j+1])==-1)            //前面的字母小的放在后面
            {
                p=argv[j];
                argv[j]=argv[j+1];
                argv[j+1]=p;
                flag=true;
            }
        }
        if(!flag)  break;
    }

    for(int i=1;i<argc;i++)
        cout<<argv[i]<<endl;
    return 0;
}
