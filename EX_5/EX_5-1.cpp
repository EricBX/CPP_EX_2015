
#include <iostream>

using namespace std;

char getUChar (char);

int main()
{
    char zimu,fanhui;

    cout<<"������һ����д��ĸ��";
    cin>>zimu;

    fanhui=getUChar(zimu);

    cout<<"����ֵ�ǣ�"<<fanhui;
    return 0;
}

char getUChar(char zimu)
{
    while (zimu<='A'||zimu>='Z')
        {
            cout<<"������Ĳ��Ǵ�д��ĸ�����������룺";
            cin>>zimu;
        }
    return zimu;
}
