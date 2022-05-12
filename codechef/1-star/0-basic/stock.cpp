#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	while (T--)
	{
	    float s, a, b, c, ans;
	    cin >> s >> a >> b >> c;
	    ans = s + (c / 100 * s);
	    if (ans >= a && ans <= b)
	    {
	        cout << "Yes" << "\n";
	    }
	    else
	    {
	        cout << "No" << "\n";
	    }
	}
	
	return 0;
}