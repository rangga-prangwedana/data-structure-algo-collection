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
	    int n, k;
	    cin >> n >> k;
	    if (k == 0)
	    {
	        cout << n << "\n";
	    }
	    else
	    {
	        cout << n % k << "\n";
	    }
	}
	
	return 0;
}