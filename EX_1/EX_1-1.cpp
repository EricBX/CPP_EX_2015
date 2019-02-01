
#include <iostream>

using namespace std;

int main()
{
int num,bai,shi,ge;
cout<<"请输入一个三位整数：";
cin>>num;          //输入一个三位整数
cout<<endl;

bai=num/100;          //bai为百位数
shi=(num/10)%10;      //shi为十位数
ge=num%10;          //ge为个位数

cout<<num<<"的百位数字是"<<bai<<"，十位数字是"<<shi<<"，个位数字是"<<ge<<endl;
return 0;

}
