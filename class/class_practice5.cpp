#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int j,m=1,i,t,a,n;
    long long sum = 0;
    cin>>a>>n;
    for(i=1;i<=n;i++)
    {
        m = 1;
        for(j=1;j<=i;j++)
        {
        m *= 10;
        }
    t = a*(m-1)/9;
    sum+=t;
    }
    cout<<sum<<endl;
    return 0;
}