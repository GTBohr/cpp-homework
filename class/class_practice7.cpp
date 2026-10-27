#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[21] ={0};
    a[0]=2;
    a[1]=2;
    a[2]=2;
    a[3]=4;
    for (n=4;n<=20;n++)
    {
        a[n]= a[n-1]+a[n-3];
    }
    cout<<a[20]<<endl;
    return 0;
}