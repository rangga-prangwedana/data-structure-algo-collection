#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Compute least common multiple using gcd

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }

    ll anew = a % b;
    return gcd(b, anew);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << lcm(a,b) << "\n";
    return 0;
}