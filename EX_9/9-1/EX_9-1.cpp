#include <iostream>
#include "circle.h"
using namespace std;
int main()
{
    Circle O1;
    cout<<"请设置圆的初始半径：";
    O1.setR();

    int choice;
    double dx,dy,r;
    double *p;
    while(true)
    {
        cout<<"请输入选项以测试此程序：\n";
        cout<<"1--重新设置圆的半径\n";
        cout<<"2--移动圆的位置\n";
        cout<<"3--打印圆的信息\n";
        cout<<"4--获取圆的圆心\n";
        cout<<"5--获取圆的半径\n";
        cout<<"0--退出\n";
        cin>>choice;

        if(!cin)
        {
            cout<<"输入错误，请重新选择！\n";
            cin.clear();
            cin.sync();
            continue;
        }
        switch(choice)
        {
            case 1:O1.setR(); break;
            case 2:cout<<"请输入移动的坐标（dx,dy），以空格间隔：";  cin>>dx>>dy;    O1.moveTo(dx,dy);   break;
            case 3:O1.display();    break;
            case 4:p=O1.getO(); cout<<"圆心是 ：("<<p[0]<<","<<p[1]<<")\n"; break;
            case 5:r=O1.getR(); cout<<"半径为："<<r<<endl;  break;
            case 0:break;
            default :cout<<"输入错误，请重新选择！\n";cin.clear(); cin.sync(); break;
        }
        if(choice==0) break;
    }
    return 0;
}
