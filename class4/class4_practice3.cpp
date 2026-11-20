#include <iostream>

using namespace std;

void print(int *p, int n)
{
    cout<<"{"<<*p;
    for (int i=1;i<n;i++)
    {
        cout<<","<<*(p+i);
    }
    cout<<"}"<<endl;
}

int main()
{
    const int N = 6;
    int array[N];
    for (int i=0;i<N;i++)
    {
        cin>>array[i];
    }
    print(array,N);
    return 0;
}
// 有const后形参就不能再被修改，否则报错。