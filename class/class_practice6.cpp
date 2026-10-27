#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,m=9,n=9;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j;
            if (j<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<endl;
            }
        }
    }
    return 0;
}