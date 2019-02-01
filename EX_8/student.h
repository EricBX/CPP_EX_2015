#include <iostream>
#include <cstring>
using namespace std;

struct studentT
{
    int number;
    char name[20];
    int MathGrade;
    int EnglishGrade;
    int PhysicsGrade;
    int total;
};

struct node
{
    studentT stu;
    node *next;
};

node *add(node *head);
node *change(node *head);
void print(const node *head, double average);
void numSearch(const node *head);
void nameSearch(const node *head);
node *numUp(node *head);
node *totalDown(node *head);
double averageCalculate(const node *head);
