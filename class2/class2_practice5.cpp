#include<iostream>
using namespace std;
int pow(int x , int y)
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
    int a,b;
    cin >>a>>b;
    cout<< pow(a,b)<< endl;
    return 0;
}
