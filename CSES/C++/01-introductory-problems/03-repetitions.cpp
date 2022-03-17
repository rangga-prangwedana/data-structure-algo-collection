#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    string asd;
    cin >> asd;
    ll maks= 0, count = 0;
    char current = 'A';
    for (char& c : asd)
    {
        if (c == current)
        {
            count += 1;
        }
        else
        {
            count = 1;
            current = c;
        }
        maks = max(maks, count);
    }
    cout << maks << endl;

    return 0;
}