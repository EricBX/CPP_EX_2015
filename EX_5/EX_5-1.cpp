
#include <iostream>

using namespace std;

char getUChar (char);

int main()
{
    char zimu,fanhui;

    cout<<"请输入一个大写字母：";
    cin>>zimu;

    fanhui=getUChar(zimu);

    cout<<"返回值是："<<fanhui;
    return 0;
}

char getUChar(char zimu)
{
    while (zimu<='A'||zimu>='Z')
        {
            cout<<"您输入的不是大写字母，请重新输入：";
            cin>>zimu;
        }
    return zimu;
}
