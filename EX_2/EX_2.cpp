
#include <iostream>

using namespace std;

int main()
{
    int num,qian,bai,shi,ge;       //����������ͱ���
    char first,second,third,fourth;  //�����ĸ��ַ����ͱ���
    cout<<"������һ����λ����";
    cin>>num;
    cout<<endl;
                //�ֱ���qian,bai,shi,ge���num��ǧ���١�ʮ����λ��
    qian=num/1000;
    bai=(num/100)%10;
    shi=(num/10)%10;
    ge=num%10;
                 //ת���Լ�����
    first=qian+77;
    second=bai+77;
    third=shi+77;
    fourth=ge+77;


    cout<<"���������"<<first<<second<<third<<fourth<<endl;

    return 0;
}
