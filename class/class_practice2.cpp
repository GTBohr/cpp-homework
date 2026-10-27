#include<iostream>
using namespace std;
int score;
int main()
{
    cin >> score;
    if (score == 9 or score == 10)
    {
        cout<<"你认为电影经典"<<endl;
    }
    if (score == 8 or score == 7)
    {
        cout<<"你认为电影非常好"<<endl;
    }
    if (score == 5 or score == 6)
    {
        cout<<"你认为电影一般"<<endl;
    }
    if (score < 5)
    {
        cout<<"你认为电影烂片"<<endl;
    }
    return 0;
}

