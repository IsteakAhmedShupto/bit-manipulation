#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string byUsingRightShift(ll n, ll i)
{
    n = (n >> i);

    if (n & 1)
    {
        return "ith bit is set";
    }
    else
    {
        return "ith bit is not set";
    }
}

string byUsingLeftShift(ll n, ll i)
{
    ll oldN = n;
    ll newN = (1 << i);

    if (oldN & newN)
    {
        return "ith bit is set";
    }
    else
    {
        return "ith bit is not set";
    }
}

int main()
{
    ll n, i;
    cin >> n >> i;
    cout << byUsingRightShift(n, i) << "\n";
    cout << byUsingLeftShift(n, i) << "\n";
}