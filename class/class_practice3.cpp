#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long origin = n;     
    long long reverse = 0;      
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;   
        n = n/10;                  
    }

    cout << (reverse == origin ? "Yes" : "No") << '\n';
    return 0;
}



