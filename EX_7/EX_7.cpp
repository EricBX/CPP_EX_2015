
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
    int i,j;
    char *p=new char [30];                  //���嶯̬�ַ���
    for (i=1;i<argc;i++)                           //ð������
    {
        bool flag=false;
        for( j=1;j<argc-i;j++)
        {
            if(strcmp(argv[j],argv[j+1])==-1)            //ǰ�����ĸС�ķ��ں���
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
