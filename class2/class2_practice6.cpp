#include<iostream>
using namespace std;
double pow(double x , int y)
{
    if(y<0)
    {
        return 0;
    }
    else if (y == 0)
    {
        return 1;
    }
    return pow(x,y-1)*x;
}
int main()
{
    double a;
    int b;
    cin >>a>>b;
    cout<< pow(a,b)<< endl;
    return 0;
}