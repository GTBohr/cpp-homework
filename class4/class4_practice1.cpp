#include <iostream>
using namespace std;

int main()
{
    short int *p1;
    short score[10]= {84,65,77,60,88,86,92,93,70,66};
    p1 = &score[0];
    p1++;
    cout<<*p1<<endl;
    p1--;
    cout<<*p1<<endl;
}