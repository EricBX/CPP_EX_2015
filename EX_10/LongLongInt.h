#ifndef LONGLONGINT_H_INCLUDED
#define LONGLONGINT_H_INCLUDED
#include<iostream>
using namespace std;

class LongLongInt
{
    friend ostream& operator<<(ostream&, const LongLongInt&);

private:
    char *a;
    int n;
public:
    LongLongInt();
    LongLongInt(const char *,int);
    LongLongInt operator+(const LongLongInt&);
    LongLongInt& operator=(const LongLongInt&);
};

#endif

