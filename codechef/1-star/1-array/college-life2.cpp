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
	    ll S, ans = 0, i;
	    cin >> S;
	    ll Q[S];
	    for (i = 0; i < S; i++)
	    {
	        cin >> Q[i];
	    }
	    for (i = 0; i < S; i++)
	    {
	        ll eps;
	        cin >> eps;
	        ll total[eps];
	        for (ll j = 0; j < eps; j++)
	        {
	            cin >> total[j];
	            ans += total[j];
	        }
	        ans -= (eps - 1) * Q[i];
	    }
	    cout << ans << "\n";
	}
	
	return 0;
}
