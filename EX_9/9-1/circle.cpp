#include "circle.h"
#include <iostream>
using namespace std;

Circle::Circle()           //Ĭ�Ϲ��캯��
{
    O[0]=0;
    O[1]=0;
}
double *Circle::getO()            //Բ��λ�û�ȡ����
{
    return O;
}

double  Circle::getR()               //�뾶��ȡ����
{
    return r;
}

void  Circle::setR()              //�뾶���ú���
{
    cout<<"������Բ�İ뾶��";
    cin>>r;
    cout<<"������ɣ�";
}

void Circle::moveTo(double dx,double dy)          //Բ��λ���ƶ�����
{
    O[0]+=dx;
    O[1]+=dy;
    cout<<"�ƶ���ɣ�\n";
}

void Circle::display()                    //Բ����Ϣ��ӡ����
{
    cout<<"Բ��λ�ã� ("<<O[0]<<","<<O[1]<<")\n";
    cout<<"Բ�İ뾶�� "<<r<<endl;
}


