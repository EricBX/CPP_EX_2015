
#include <iostream>

using namespace std;

int main()
{
int num,bai,shi,ge;
cout<<"������һ����λ������";
cin>>num;          //����һ����λ����
cout<<endl;

bai=num/100;          //baiΪ��λ��
shi=(num/10)%10;      //shiΪʮλ��
ge=num%10;          //geΪ��λ��

cout<<num<<"�İ�λ������"<<bai<<"��ʮλ������"<<shi<<"����λ������"<<ge<<endl;
return 0;

}
