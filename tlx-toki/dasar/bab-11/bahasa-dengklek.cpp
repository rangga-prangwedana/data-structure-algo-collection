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
        s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]); 
    }
    cout << s << "\n";
    return 0;
}
