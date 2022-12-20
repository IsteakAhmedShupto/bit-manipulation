// or, and, x-or operations

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x, y;
    cin >> x >> y;
    cout << (x | y) << "\n";
    cout << (x & y) << "\n";
    cout << (x ^ y) << "\n";
}