#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    ll x, maks = 0, diff = 0;

    cin >> n;

    while(n--)
    {
        cin >> x;
        maks = max(maks, x);
        diff += maks - x;        
    }

    cout << diff << "\n";

    return 0;
}