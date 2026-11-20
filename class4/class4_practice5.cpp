#include<iostream>

using namespace std;

int main()
{
    int a=1;
    int *p = &a;
    a =9;
    cout<<*p<<endl;
}