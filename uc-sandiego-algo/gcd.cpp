#include <bits/stdc++.h>
using namespace std;

#define ll long long 

// This is using euclidean algorithm

ll euclid_gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }

    ll aprime = a % b;
    return euclid_gcd(b, aprime);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a,b;
    cin >> a >> b;
    cout << euclid_gcd(a,b) << "\n";
    return 0;
}
