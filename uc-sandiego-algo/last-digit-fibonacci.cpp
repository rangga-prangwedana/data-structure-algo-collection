#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll last_fibo(ll n)
{
    // Return the last digit of nth fibonacci number
    ll store[1000001];

    store[0] = 0;
    store[1] = 1;

    for (ll i = 2; i <= n; i++)
    {
        store[i] = (store[i - 1] + store[i - 2]) % 10;
    }

    return store[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    cout << last_fibo(n) << "\n";
    return 0;
}