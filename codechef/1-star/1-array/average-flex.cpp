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
	    int n, x, ans = 0, diff = 0;
	    cin >> n;
	    int memo[101] = {};
	    for (int i = 0; i < n; i++)
	    {
	        cin >> x;
	        memo[x]++;
	    }
	    for (int i = 0; i < 101; i++)
	    {
	        if (memo[i] != 0)
	        {
	            diff += memo[i];
	            if (diff > (n - diff))
	            {
	                ans += memo[i];
	            }
	        }
	        
	    }
	    cout << ans << "\n";
	}
	
	return 0;
}
