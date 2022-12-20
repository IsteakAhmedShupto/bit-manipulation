// left and right shifting

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, i;
    cin >> n >> i;
    cout << (n << i) << "\n";
    cout << (n >> i) << "\n";
}

// A formula for left shift result = n * (pow(2,i))
// A formula for right shift result = n / (pow(2,i))