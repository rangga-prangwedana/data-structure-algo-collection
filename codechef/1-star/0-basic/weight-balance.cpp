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
	    int w1, w2, x1, x2, m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    cout << (((w2 - w1) >= x1 * m) && ((w2 - w1) <= x2 * m)) << "\n";
	    
	}
	
	return 0;
}
