#include <iostream>
#include "circle.h"
using namespace std;
int main()
{
    Circle O1;
    cout<<"������Բ�ĳ�ʼ�뾶��";
    O1.setR();

    int choice;
    double dx,dy,r;
    double *p;
    while(true)
    {
        cout<<"������ѡ���Բ��Դ˳���\n";
        cout<<"1--��������Բ�İ뾶\n";
        cout<<"2--�ƶ�Բ��λ��\n";
        cout<<"3--��ӡԲ����Ϣ\n";
        cout<<"4--��ȡԲ��Բ��\n";
        cout<<"5--��ȡԲ�İ뾶\n";
        cout<<"0--�˳�\n";
        cin>>choice;

        if(!cin)
        {
            cout<<"�������������ѡ��\n";
            cin.clear();
            cin.sync();
            continue;
        }
        switch(choice)
        {
            case 1:O1.setR(); break;
            case 2:cout<<"�������ƶ������꣨dx,dy�����Կո�����";  cin>>dx>>dy;    O1.moveTo(dx,dy);   break;
            case 3:O1.display();    break;
            case 4:p=O1.getO(); cout<<"Բ���� ��("<<p[0]<<","<<p[1]<<")\n"; break;
            case 5:r=O1.getR(); cout<<"�뾶Ϊ��"<<r<<endl;  break;
            case 0:break;
            default :cout<<"�������������ѡ��\n";cin.clear(); cin.sync(); break;
        }
        if(choice==0) break;
    }
    return 0;
}
