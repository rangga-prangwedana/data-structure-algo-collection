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
	    int ans, a, b, a1, b1, a2, b2;
	    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
	    if ((a == a1 || a == b1) && (b == a1 || b == b1))
	    {
	        ans = 1;
	    }
	    else if ((a == a2 || a == b2) && (b == a2 || b == b2))
	    {
	        ans = 2;
	    }
	    else
	    {
	        ans = 0;
	    }
	    cout << ans << "\n";
	}
	
	return 0;
}