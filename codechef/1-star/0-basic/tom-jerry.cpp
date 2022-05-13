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
	    int a, b, c, d, k, ans;
	    cin >> a >> b >> c >> d >> k;
	    ans = abs(c - a) + abs(d - b);
	    if (k >= ans && k % 2 == ans % 2)
	    {
	        cout << "YES" << "\n";
	    }
	    else
	    {
	        cout << "NO" << "\n";
	    }
	}
	
	return 0;
}
