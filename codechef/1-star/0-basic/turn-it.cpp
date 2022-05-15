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
	    int u, v, a, s;
	    cin >> u >> v >> a >> s;
	    if (u * u - 2 * a * s <= v * v)
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