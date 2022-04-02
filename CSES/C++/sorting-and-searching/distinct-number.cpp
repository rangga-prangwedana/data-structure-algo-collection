#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    set <int> ans;
    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        ans.insert(num);

    }
    cout << ans.size() << "\n";

    return 0;
}
