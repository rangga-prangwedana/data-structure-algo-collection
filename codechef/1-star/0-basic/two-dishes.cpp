#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	while (T--)
	{
	    int n, s;
	    cin >> n >> s;
	    if (s <= n)
	    {
	        cout << s << "\n"; 
	    }
	    else
	    {
	        cout << 2 * n - s << "\n";
	    }
	}
	return 0;
}