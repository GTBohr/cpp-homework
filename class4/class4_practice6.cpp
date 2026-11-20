#include<iostream>

using namespace std;

struct SimpleCircle
{
    public:
        int Radius;
        int *itsRadius=&Radius;
};
double square(double a)
{
    return a*a;
}
double sizeofcircle(int r,double pi = 3.14)
{
    return pi*square(r);
}
int main()
{
    SimpleCircle s;
    s.Radius = 3;
    double r = *s.itsRadius;
    cout<<r<<endl;
    double size = sizeofcircle(r);
    cout<<size<<endl;
    return 0;
}