#include <iostream>
using namespace std;

int main()
{
    long long profit;          
    cin >> profit;

    double bonus;              
    if (profit <= 10)
        bonus = profit * 0.1;
    else if (profit <= 20)
        bonus = 1.0 + (profit - 10) * 0.075;
    else if (profit <= 40)
        bonus = 1.75 + (profit - 20) * 0.05;
    else if (profit <= 60)
        bonus = 2.75 + (profit - 40) * 0.03;
    else if (profit <= 100)
        bonus = 3.35 + (profit - 60) * 0.015;
    else
        bonus = 3.95 + (profit - 100) * 0.01;

    cout << bonus << '\n';
    return 0;
}
