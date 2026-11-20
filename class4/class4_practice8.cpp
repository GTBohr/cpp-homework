#include<iostream>
#include <string>
using namespace std;

int fibon(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
   return fibon(n-1)+fibon(n-2);
}
string s;
string reverseStr(const string& s)
{
    if (s.size() <= 1)      
        return s;

    return reverseStr(s.substr(1)) + s[0];
}
int main()
{
    int n;
    string s;
    cin>>s;
    cin>>n;
    cout<<fibon(n)<<endl;
    cout<<reverseStr(s)<<endl;
}