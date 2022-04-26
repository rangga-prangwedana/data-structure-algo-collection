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
	    int n, ans;
	    cin >> n;
	    ans = (n * n + n) / 2;
	    if (ans % 2 != 0)
	    {
	        cout << n - 1 << "\n";
	    }
	    else 
	    {
	        cout << n << "\n";
	    }
	}
	
	return 0;
}