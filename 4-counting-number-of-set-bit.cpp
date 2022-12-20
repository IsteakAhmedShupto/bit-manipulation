// Count the numbers of setbit

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll byRightShifting(ll n)
{
    ll count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = (n >> 1);
    }

    return count;
}

ll byLeftShifting(ll n)
{
    ll count = 0;

    for (ll i = 0; i < 64; i++)
    {
        if (n & (1LL << i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    ll n;
    cin >> n;
    cout << byRightShifting(n) << "\n";
    cout << byLeftShifting(n) << "\n";
}