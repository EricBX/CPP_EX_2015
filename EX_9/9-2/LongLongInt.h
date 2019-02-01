#ifndef LONGLONGINT_H_INCLUDED
#define LONGLONGINT_H_INCLUDED
#include<iostream>
using namespace std;

class LongLongInt
{
private:
    char *a;
    int n;
public:
    LongLongInt();
    LongLongInt(const char *,int n);
    LongLongInt(const LongLongInt &);
    LongLongInt add(const LongLongInt &);
    void display();
};

#endif
