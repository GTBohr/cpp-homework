#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int t = x % y;
        x = y;
        y = t;
    }
    return x;                
}

int lcm(int x, int y) {
    if (x == 0 || y == 0) return 0;
    return x / gcd(x, y) * y; 
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "最大公约数：" << gcd(a, b) << endl;
    cout << "最小公倍数：" << lcm(a, b) << endl;
    return 0;
}