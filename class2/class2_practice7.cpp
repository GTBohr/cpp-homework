#include <iostream>
using namespace std;

double pow_1(double x, int m) 
{
    if (m == 0) 
    return 1;
    if (m > 0) 
    return pow_1(x, m - 1) * x;
    return pow_1(x, m + 1) / x;      
}

long long pow_2(long long y, int m) {
    if (m < 0) 
    return 0;             
    if (m == 0) 
    return 1;
    return pow_2(y, m - 1) * y;
}

int main() {
    long long a;
    int m;
    double b;
    cin >> a >> b >> m;

    cout << pow_2(a, m) << ' ' << pow_1(b, m) << endl;
    return 0;
}