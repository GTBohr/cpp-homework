#include<iostream>

using namespace std;

void swap(int &x, int &y)
{
    int a = x;
    x = y;
    y = a;
}
int a,b;
int main()
{
cin >> a >> b;
swap(a,b);
cout<<a<<' '<<b<<endl;
return 0;
}
