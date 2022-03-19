#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fibomap(const int &n)
{
    static map<int, ll> memo;

    if (memo.count(n) > 0)
    {
        return memo[n];
    }
    if (n <= 2)
    {
        return 1;
    }

    memo[n] = fibomap(n-1) + fibomap(n-2);
    return memo[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    

    cout << fibomap(n) << "\n";
    return 0;
}