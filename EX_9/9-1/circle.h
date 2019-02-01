#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED



class Circle
{
private:
    double O[2];
    double r;
public:
    Circle();
    double *getO();
    double  getR();
    void  setR();
    void    moveTo(double dx,double dy);
    void display();
};

#endif
