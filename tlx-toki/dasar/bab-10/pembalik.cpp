#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = ret * 10 + temp % 10;
        temp /= 10;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, ra, rb;
    cin >> a >> b;

    ra = reverse(a);
    rb = reverse(b);

    cout << reverse(ra+rb) << "\n";
}