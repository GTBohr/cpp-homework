#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[12]={0};
    a[1] = 1;
    for(n=1;n<=10;n++)
    a[n+1]=2*(a[n]+1);
    cout<<a[10]<<endl;
    return 0;
}