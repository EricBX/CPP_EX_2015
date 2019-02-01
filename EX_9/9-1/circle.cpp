#include "circle.h"
#include <iostream>
using namespace std;

Circle::Circle()           //默认构造函数
{
    O[0]=0;
    O[1]=0;
}
double *Circle::getO()            //圆心位置获取函数
{
    return O;
}

double  Circle::getR()               //半径获取函数
{
    return r;
}

void  Circle::setR()              //半径设置函数
{
    cout<<"请输入圆的半径：";
    cin>>r;
    cout<<"设置完成！";
}

void Circle::moveTo(double dx,double dy)          //圆的位置移动函数
{
    O[0]+=dx;
    O[1]+=dy;
    cout<<"移动完成！\n";
}

void Circle::display()                    //圆的信息打印函数
{
    cout<<"圆心位置： ("<<O[0]<<","<<O[1]<<")\n";
    cout<<"圆的半径： "<<r<<endl;
}


