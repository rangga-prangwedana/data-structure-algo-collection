#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '_')
        {
            s.erase(i, 1);
            s[i] -= 32;
        }
        else if (isupper(s[i]))
        {
            s[i] += 32 ;
            s.insert(i, "_");
        }
    }
    cout << s << "\n";
    return 0;
}