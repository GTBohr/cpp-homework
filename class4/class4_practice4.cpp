#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> takeToEnd(vector<int> a, int i)
{
    int n = (int)a.size();
    i = min(i, n);

    int len = n;
    for (int t = 0; t < i; ++t) {
        auto it = min_element(a.begin(), a.begin() + len);
        int v = *it;
        a.erase(it);
        a.push_back(v);
        --len;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;                      

    vector<int> a(n);
    for (int k = 0; k < n; ++k)
        cin >> a[k];              

    int i;
    cin >> i;                   

    vector<int> res = takeToEnd(a, i);

    for (int x : res) cout << x << " ";
    cout << "\n";
}