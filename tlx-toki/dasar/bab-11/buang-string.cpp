#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    
    cin >> s >> t;
    while (s.find(t) != -1)
    {
        s.erase(s.find(t), t.length());
    }
    cout << s << "\n";

    return 0;
}