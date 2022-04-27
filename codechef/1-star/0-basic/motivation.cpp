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
	    int n, x;
	    cin >> n >> x;
	    int maks = 0;
	    while (n--)
	    {
	        int s, r;
	        cin >> s >> r;
	        if (s <= x)
	        {
	            maks = max(maks, r);
	        }
	    }
	    cout << maks << "\n";
	}
	
	return 0;
}
