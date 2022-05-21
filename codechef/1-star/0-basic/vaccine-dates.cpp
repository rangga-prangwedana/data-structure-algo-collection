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
	    int d, l, r;
	    cin >> d >> l >> r;
	    if (l <= d && d <= r)
	    {
	        cout << "Take second dose now" << "\n";
	    }
	    else if (d < l)
	    {
	        cout << "Too Early" << "\n";
	    }
	    else if (d > r)
	    {
	        cout << "Too Late" << "\n";
	    }
	}
	
	return 0;
}
