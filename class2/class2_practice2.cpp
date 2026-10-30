#include <iostream>

using namespace std;
int is_prime(int n)
{
    for (int i = 2 ; i<=n-1 ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n ;
    if (is_prime(n))
    {
        cout << "yes" <<endl;
    }
    else
    {
        cout << "no" <<endl;
    }
    return 0;
}