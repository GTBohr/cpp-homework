#include <iostream>

using namespace std;
void f(short int x, short int y)
{
    if(y == 0)
    {cout<< -1<<endl;}
    else
    {
        cout<< x/y <<endl;
    }
}
int main()
{
    int a,b;
    cin >> a >> b;
    f(a,b);
    return 0;
}