
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;


int main()
{
    int choice;
    node *head=NULL;
    double average;
    do
    {
        cout<<"欢迎使用成绩管理系统！\n"
        <<"1---添加学生信息\n"
        <<"2---修改学生信息\n"
        <<"3---显示全部学生信息\n"
        <<"4---按学号查询学生信息\n"
        <<"5---按姓名查询学生信息\n"
        <<"6---按学号升序排序\n"
        <<"7---按总分降序排序\n"
        <<"0---退出\n";

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
            case 1: head=add(head);       average=averageCalculate(head);    break;
            case 2: head=change(head);  average=averageCalculate(head);      break;
            case 3: print(head,average);         break;
            case 4: numSearch(head);        break;
            case 5: nameSearch(head);      break;
            case 6: head=numUp(head);              break;
            case 7: head=totalDown(head);         break;
            case 0:break;
            default : {cout<<"输入错误，请重新选择！\n";cin.clear(); cin.sync(); break;}
        }
    if(choice==0) break;
    }while(true);
    return 0;
}

node *add(node *head)                    //添加学生信息
{
    node *p;
    char name[20];
    p=new node;
    cout<<"请输入新增学生信息\n"<<"学号：";
    cin>>p->stu.number;
    cout<<"姓名：";
    cin>>name;  strcpy(p->stu.name,name);
    cout<<"数学成绩：";
    cin>>p->stu.MathGrade;
    cout<<"英语成绩：";
    cin>>p->stu.EnglishGrade;
    cout<<"物理成绩：";
    cin>>p->stu.PhysicsGrade;
    p->stu.total=p->stu.MathGrade+p->stu.EnglishGrade+p->stu.PhysicsGrade;
    if(head==NULL)    {head=p;  p->next=NULL;}
    else {  p->next=head;   head=p;}
    cout<<"添加完成！\n";
    cout<<"任意输入以返回菜单：";
    cin>>name;
    return head;
}

node *change(node *head)              //修改学生信息
{
    int num;
    node *p;
    p=head;
    cout<<"请输入要修改信息的学生学号：";
    cin>>num;
    while(p!=NULL&&num!=p->stu.number)
        p=p->next;
    if(p)
    {
        cout<<"已找到，请输入"<<p->stu.name<<"的新信息：";
        cout<<"\n学号：";
        cin>>p->stu.number;
        cout<<"姓名：";
        cin>>p->stu.name;
        cout<<"数学成绩：";
        cin>>p->stu.MathGrade;
        cout<<"英语成绩：";
        cin>>p->stu.EnglishGrade;
        cout<<"物理成绩：";
        cin>>p->stu.PhysicsGrade;
        p->stu.total=p->stu.MathGrade+p->stu.EnglishGrade+p->stu.PhysicsGrade;
        cout<<"修改完成！\n";
    }
    else cout<<"查无此人！\n";
    cout<<"任意输入以返回菜单：";
    char a[10];
    cin>>a;
    return head;
}

void print(const node *head,double average)                           //显示全部学生信息
{
    const node *p;
    p=head;
    if (p!=NULL)
        cout<<"学号\t"<<"姓名\t"<<"数学成绩\t"<<"英语成绩\t"<<"物理成绩\t"<<"总分\n";
    else cout<<"没有信息！\n";
    while(p!=NULL)
    {
        cout<<p->stu.number<<'\t'
        <<p->stu.name<<'\t'
        <<p->stu.MathGrade<<'\t'<<'\t'
        <<p->stu.EnglishGrade<<'\t'<<'\t'
        <<p->stu.PhysicsGrade<<'\t'<<'\t'
        <<p->stu.total<<endl;
        p=p->next;
    }
    cout<<"所有学生的总分的平均分是："<<average<<endl;
    cout<<"任意输入以返回菜单：";
    char a[10];
    cin>>a;
}

void numSearch(const node *head)            //按学号查询学生信息
{
    int num;
    const node *p;
    p=head;
    cout<<"请输入学号：";
    cin>>num;
    while(p!=NULL&&num!=p->stu.number)
        p=p->next;
     if (p!=NULL)
        {cout<<"学号\t"<<"姓名\t"<<"数学成绩\t"<<"英语成绩\t"<<"物理成绩\t"<<"总分\n";
        cout<<p->stu.number<<'\t'
        <<p->stu.name<<'\t'
        <<p->stu.MathGrade<<'\t'<<'\t'
        <<p->stu.EnglishGrade<<'\t'<<'\t'
        <<p->stu.PhysicsGrade<<'\t'<<'\t'
        <<p->stu.total<<endl;}
    else cout<<"查无此人！\n";
    cout<<"任意输入以返回菜单：";
    char a[10];
    cin>>a;
}

void nameSearch(const node *head)                //按姓名查询学生信息
{
    char name[20];
    const node *p;
    p=head;
    cout<<"请输入姓名：";
    cin>>name;
    while(p!=NULL&&strcmp(name,p->stu.name)!=0)
        p=p->next;
     if (p!=NULL)
        {cout<<"学号\t"<<"姓名\t"<<"数学成绩\t"<<"英语成绩\t"<<"物理成绩\t"<<"总分\n";
        cout<<p->stu.number<<'\t'
        <<p->stu.name<<'\t'
        <<p->stu.MathGrade<<'\t'<<'\t'
        <<p->stu.EnglishGrade<<'\t'<<'\t'
        <<p->stu.PhysicsGrade<<'\t'<<'\t'
        <<p->stu.total<<endl;}
   else cout<<"查无此人！\n";
    cout<<"任意输入以返回菜单：";
    char a[10];
    cin>>a;
}

node *numUp(node *head)                    //按学号升序排序 （冒泡法）
{
    int n=0;
    node*p3;
    p3->next=head;
    node *p2, *p1, *p4, *p5,*p6;      //p3始终指向p2的前一节点，
                                                //p2始终取链表中p2以后节点的最小值，
                                        //p5代表p2以后节点中最小值的那个节点，
                                        //p4始终指向p5前一节点
                                        //p1起扫描作用
    if(head==NULL) {cout<<"没有信息，无法排序！\n"; return head;}
    if(head->next==NULL)    {cout<<"排序完成！\n";return head;}
    else                                    //先找出值最小的节点给head
    {
    while(p3->next->next!=NULL)
    {
        p2=p3->next;
        p5=p2;
        p1=p2;
        bool flag=false;
        while(p1->next!=NULL)        //此循环找出元链表中剩余节点中值最小的节点
        {
            if(p5->stu.number>p1->next->stu.number)
            {
                p5=p1->next;
                p4=p1;
                flag=true;
            }
            p1=p1->next;
        }
        if(flag)   //交换节点顺序使值小的节点往前调
        {
            if(p2==p4)            //相邻情况
            {
                p2->next=p5->next;
                p5->next=p2;
                p3->next=p5;
            }
            else   //不相邻情况
            {
                node *temp=p5->next;
                p5->next=p2->next;
                p3->next=p5;
                p4->next=p2;
                p2->next=temp;
            }
        }
        p3=p3->next;

        if(n==0)               //重新排链表
        {
            head=p5;
            p6=head;
        }
        else
        {
            p6=p6->next;
            p6=p5;
        }
        n++;
    }
    }


    cout<<"排序完成！\n";
    cout<<"任意输入以返回菜单：";
    char a[10];
    cin>>a;
    return head;
}

node *totalDown(node *head)           //按总分降序排序   （冒泡法）
{
    int n=0;
    node*p3;
    p3->next=head;
    node *p2, *p1, *p4, *p5,*p6;

    if(head==NULL) {cout<<"没有信息，无法排序！\n"; return head;}
    if(head->next==NULL)    {cout<<"排序完成！\n";return head;}
    else
    {
        while(p3->next->next!=NULL)
        {
            p2=p3->next;
            p5=p2;
            p1=p2;
            bool flag=false;
            while(p1->next!=NULL)        //此循环找出元链表中剩余节点中值最小的节点
            {
                if(p5->stu.total<p1->next->stu.total)
                {
                    p5=p1->next;
                    p4=p1;
                    flag=true;
                }
                p1=p1->next;
            }
            if(flag)   //交换节点顺序使值小的节点往前调
            {
                if(p2==p4)            //相邻情况
                {
                    p2->next=p5->next;
                    p5->next=p2;
                    p3->next=p5;
                }
                else   //不相邻情况
                {
                    node *temp=p5->next;
                    p5->next=p2->next;
                    p3->next=p5;
                    p4->next=p2;
                    p2->next=temp;
                }
            }
            p3=p3->next;

            if(n==0)                //重新排链表
            {
                head=p5;
                p6=head;
            }
            else
            {
                p6=p6->next;
                p6=p5;
            }
            n++;
        }
    }
    cout<<"排序完成！\n";
    cout<<"任意输入以返回菜单：";
    char a[10];
    cin>>a;
    return head;
}

double averageCalculate(const node *head)
{
    double num=0,n=0,average=0;
    const node *p;
    p=head;
    while(p!=NULL)
    {
        num+=p->stu.total;
        n=n+1;
        p=p->next;
    }
    if(n!=0)        average=num/n;
    return average;
}

