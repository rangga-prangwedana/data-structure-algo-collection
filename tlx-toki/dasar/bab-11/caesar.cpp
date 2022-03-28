#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int c;

    cin >> s >> c;

    for (int i = 0; i < s.length(); i++)
    {
        int ord = s[i] - 'a';
        int encrypted = (ord + c) % 26;
        s[i] = encrypted + 'a';
    }
    cout << s << "\n";
    return 0;
}