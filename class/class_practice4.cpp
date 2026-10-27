#include<iostream>
using namespace std;
int i,a,b,c,k;
int main()
{
    for(i=100;i<=999;i++)
    {
        k = i;
        a = k%10;
        k = (k-a)/10;
        b = k%10;
        k = (k-b)/10;
        c = k;
        if (a*a*a+b*b*b+c*c*c==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}