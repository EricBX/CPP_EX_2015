
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
        cout<<"��ӭʹ�óɼ�����ϵͳ��\n"
        <<"1---���ѧ����Ϣ\n"
        <<"2---�޸�ѧ����Ϣ\n"
        <<"3---��ʾȫ��ѧ����Ϣ\n"
        <<"4---��ѧ�Ų�ѯѧ����Ϣ\n"
        <<"5---��������ѯѧ����Ϣ\n"
        <<"6---��ѧ����������\n"
        <<"7---���ֽܷ�������\n"
        <<"0---�˳�\n";

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
            case 1: head=add(head);       average=averageCalculate(head);    break;
            case 2: head=change(head);  average=averageCalculate(head);      break;
            case 3: print(head,average);         break;
            case 4: numSearch(head);        break;
            case 5: nameSearch(head);      break;
            case 6: head=numUp(head);              break;
            case 7: head=totalDown(head);         break;
            case 0:break;
            default : {cout<<"�������������ѡ��\n";cin.clear(); cin.sync(); break;}
        }
    if(choice==0) break;
    }while(true);
    return 0;
}

node *add(node *head)                    //���ѧ����Ϣ
{
    node *p;
    char name[20];
    p=new node;
    cout<<"����������ѧ����Ϣ\n"<<"ѧ�ţ�";
    cin>>p->stu.number;
    cout<<"������";
    cin>>name;  strcpy(p->stu.name,name);
    cout<<"��ѧ�ɼ���";
    cin>>p->stu.MathGrade;
    cout<<"Ӣ��ɼ���";
    cin>>p->stu.EnglishGrade;
    cout<<"����ɼ���";
    cin>>p->stu.PhysicsGrade;
    p->stu.total=p->stu.MathGrade+p->stu.EnglishGrade+p->stu.PhysicsGrade;
    if(head==NULL)    {head=p;  p->next=NULL;}
    else {  p->next=head;   head=p;}
    cout<<"�����ɣ�\n";
    cout<<"���������Է��ز˵���";
    cin>>name;
    return head;
}

node *change(node *head)              //�޸�ѧ����Ϣ
{
    int num;
    node *p;
    p=head;
    cout<<"������Ҫ�޸���Ϣ��ѧ��ѧ�ţ�";
    cin>>num;
    while(p!=NULL&&num!=p->stu.number)
        p=p->next;
    if(p)
    {
        cout<<"���ҵ���������"<<p->stu.name<<"������Ϣ��";
        cout<<"\nѧ�ţ�";
        cin>>p->stu.number;
        cout<<"������";
        cin>>p->stu.name;
        cout<<"��ѧ�ɼ���";
        cin>>p->stu.MathGrade;
        cout<<"Ӣ��ɼ���";
        cin>>p->stu.EnglishGrade;
        cout<<"����ɼ���";
        cin>>p->stu.PhysicsGrade;
        p->stu.total=p->stu.MathGrade+p->stu.EnglishGrade+p->stu.PhysicsGrade;
        cout<<"�޸���ɣ�\n";
    }
    else cout<<"���޴��ˣ�\n";
    cout<<"���������Է��ز˵���";
    char a[10];
    cin>>a;
    return head;
}

void print(const node *head,double average)                           //��ʾȫ��ѧ����Ϣ
{
    const node *p;
    p=head;
    if (p!=NULL)
        cout<<"ѧ��\t"<<"����\t"<<"��ѧ�ɼ�\t"<<"Ӣ��ɼ�\t"<<"����ɼ�\t"<<"�ܷ�\n";
    else cout<<"û����Ϣ��\n";
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
    cout<<"����ѧ�����ֵܷ�ƽ�����ǣ�"<<average<<endl;
    cout<<"���������Է��ز˵���";
    char a[10];
    cin>>a;
}

void numSearch(const node *head)            //��ѧ�Ų�ѯѧ����Ϣ
{
    int num;
    const node *p;
    p=head;
    cout<<"������ѧ�ţ�";
    cin>>num;
    while(p!=NULL&&num!=p->stu.number)
        p=p->next;
     if (p!=NULL)
        {cout<<"ѧ��\t"<<"����\t"<<"��ѧ�ɼ�\t"<<"Ӣ��ɼ�\t"<<"����ɼ�\t"<<"�ܷ�\n";
        cout<<p->stu.number<<'\t'
        <<p->stu.name<<'\t'
        <<p->stu.MathGrade<<'\t'<<'\t'
        <<p->stu.EnglishGrade<<'\t'<<'\t'
        <<p->stu.PhysicsGrade<<'\t'<<'\t'
        <<p->stu.total<<endl;}
    else cout<<"���޴��ˣ�\n";
    cout<<"���������Է��ز˵���";
    char a[10];
    cin>>a;
}

void nameSearch(const node *head)                //��������ѯѧ����Ϣ
{
    char name[20];
    const node *p;
    p=head;
    cout<<"������������";
    cin>>name;
    while(p!=NULL&&strcmp(name,p->stu.name)!=0)
        p=p->next;
     if (p!=NULL)
        {cout<<"ѧ��\t"<<"����\t"<<"��ѧ�ɼ�\t"<<"Ӣ��ɼ�\t"<<"����ɼ�\t"<<"�ܷ�\n";
        cout<<p->stu.number<<'\t'
        <<p->stu.name<<'\t'
        <<p->stu.MathGrade<<'\t'<<'\t'
        <<p->stu.EnglishGrade<<'\t'<<'\t'
        <<p->stu.PhysicsGrade<<'\t'<<'\t'
        <<p->stu.total<<endl;}
   else cout<<"���޴��ˣ�\n";
    cout<<"���������Է��ز˵���";
    char a[10];
    cin>>a;
}

node *numUp(node *head)                    //��ѧ���������� ��ð�ݷ���
{
    int n=0;
    node*p3;
    p3->next=head;
    node *p2, *p1, *p4, *p5,*p6;      //p3ʼ��ָ��p2��ǰһ�ڵ㣬
                                                //p2ʼ��ȡ������p2�Ժ�ڵ����Сֵ��
                                        //p5����p2�Ժ�ڵ�����Сֵ���Ǹ��ڵ㣬
                                        //p4ʼ��ָ��p5ǰһ�ڵ�
                                        //p1��ɨ������
    if(head==NULL) {cout<<"û����Ϣ���޷�����\n"; return head;}
    if(head->next==NULL)    {cout<<"������ɣ�\n";return head;}
    else                                    //���ҳ�ֵ��С�Ľڵ��head
    {
    while(p3->next->next!=NULL)
    {
        p2=p3->next;
        p5=p2;
        p1=p2;
        bool flag=false;
        while(p1->next!=NULL)        //��ѭ���ҳ�Ԫ������ʣ��ڵ���ֵ��С�Ľڵ�
        {
            if(p5->stu.number>p1->next->stu.number)
            {
                p5=p1->next;
                p4=p1;
                flag=true;
            }
            p1=p1->next;
        }
        if(flag)   //�����ڵ�˳��ʹֵС�Ľڵ���ǰ��
        {
            if(p2==p4)            //�������
            {
                p2->next=p5->next;
                p5->next=p2;
                p3->next=p5;
            }
            else   //���������
            {
                node *temp=p5->next;
                p5->next=p2->next;
                p3->next=p5;
                p4->next=p2;
                p2->next=temp;
            }
        }
        p3=p3->next;

        if(n==0)               //����������
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


    cout<<"������ɣ�\n";
    cout<<"���������Է��ز˵���";
    char a[10];
    cin>>a;
    return head;
}

node *totalDown(node *head)           //���ֽܷ�������   ��ð�ݷ���
{
    int n=0;
    node*p3;
    p3->next=head;
    node *p2, *p1, *p4, *p5,*p6;

    if(head==NULL) {cout<<"û����Ϣ���޷�����\n"; return head;}
    if(head->next==NULL)    {cout<<"������ɣ�\n";return head;}
    else
    {
        while(p3->next->next!=NULL)
        {
            p2=p3->next;
            p5=p2;
            p1=p2;
            bool flag=false;
            while(p1->next!=NULL)        //��ѭ���ҳ�Ԫ������ʣ��ڵ���ֵ��С�Ľڵ�
            {
                if(p5->stu.total<p1->next->stu.total)
                {
                    p5=p1->next;
                    p4=p1;
                    flag=true;
                }
                p1=p1->next;
            }
            if(flag)   //�����ڵ�˳��ʹֵС�Ľڵ���ǰ��
            {
                if(p2==p4)            //�������
                {
                    p2->next=p5->next;
                    p5->next=p2;
                    p3->next=p5;
                }
                else   //���������
                {
                    node *temp=p5->next;
                    p5->next=p2->next;
                    p3->next=p5;
                    p4->next=p2;
                    p2->next=temp;
                }
            }
            p3=p3->next;

            if(n==0)                //����������
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
    cout<<"������ɣ�\n";
    cout<<"���������Է��ز˵���";
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

