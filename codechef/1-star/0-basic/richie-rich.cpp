#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	
	while(T--)
	{
	    int a, b, x;
	    cin >> a >> b >> x;
	    int ans = (b - a) / x;
	    cout << ans << "\n";
	}
	return 0;
}
