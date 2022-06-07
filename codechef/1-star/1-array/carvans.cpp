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
	    int n;
	    cin >> n;
	    int memo[n];
	    for (int i = 0; i < n; i++)
	    {
	        cin >> memo[i];
	    }
	    int speed = memo[0], ans = 1;
	    for (int i = 1; i < n; i++)
	    {
	        if (memo[i] <= speed)
	        {
	            ans++;
	        }
	        if (memo[i] < speed)
	        {
	            speed = memo[i];
	        }
	    }
	    cout << ans << "\n";
	}
	
	return 0;
}