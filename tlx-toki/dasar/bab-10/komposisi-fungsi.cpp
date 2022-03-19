#include <bits/stdc++.h>
using namespace std;

// Global variable
int a, b, k, x;

int fungsi(int x)
{
    for (int i = 0; i < k; i++)
    {
        x = abs(a*x + b);
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> k >> x;
    cout << fungsi(x) << "\n";

    return 0;
}
