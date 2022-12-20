// check if a number is power of two or not

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    // A number is power of two if it's set bit is 1

    ll count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    if (count == 1)
    {
        cout << "The number is power of two.";
    }
    else
    {
        cout << "The number is not power of two.";
    }
}

// Another approach
// if (n&(n-1) == 0) Then the number is power of two else it is not.