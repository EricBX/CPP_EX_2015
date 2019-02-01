
#include <iostream>

using namespace std;

int main()
{
    int num,qian,bai,shi,ge;       //定义五个整型变量
    char first,second,third,fourth;  //定义四个字符类型变量
    cout<<"请输入一个四位数：";
    cin>>num;
    cout<<endl;
                //分别以qian,bai,shi,ge存放num的千、百、十、个位数
    qian=num/1000;
    bai=(num/100)%10;
    shi=(num/10)%10;
    ge=num%10;
                 //转化以及加密
    first=qian+77;
    second=bai+77;
    third=shi+77;
    fourth=ge+77;


    cout<<"加密输出："<<first<<second<<third<<fourth<<endl;

    return 0;
}
