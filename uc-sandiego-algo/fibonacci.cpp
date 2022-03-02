#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fibonacci(int n)
{
    ll store[46];

    store[0] = 0;
    store[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        store[i] = store[i - 1] + store[i - 2];
    }

    return store[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}