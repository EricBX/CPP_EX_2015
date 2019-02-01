
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool guess();

int main()
{
while(1)
{
    bool flag;                  //flag=1时再来一局，flag=0时结束游戏
    flag=guess();
    if(flag==0)  break;
}
    return 0;
}
bool guess()
{
    int a,b;
    char c;
    bool flag;
    srand(time(NULL));
    a=rand()%100+1;

    cout<<"I have a number between 1 and 100.\n"<<"Please input your guess:";
    while(1)
    {
        cin>>b;
        if(b==a) {cout<<"Excellent! You gessed the number!";    break;}
            else if(b>a) cout<<"Too high! Try again:";
                    else cout<<"Too low! Try again:";
    }
    while(1)
    {
    cout<<"Would you like to play again(y or n)?    ";
    cin>>c;
    if(c=='y') {cin.clear();cin.sync();flag=1;break;}
        else if(c=='n') {cin.clear();cin.sync();flag=0;break;}
                else {cout<<"Wrong input! ";cin.clear();cin.sync();}
    }
    return flag;
}
