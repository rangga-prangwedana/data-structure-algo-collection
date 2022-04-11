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
	    int n, p, x, y, total = 0;
	    p--;
	    vector <int> memo;
	    cin >> n >> p >> x >> y;
	    for (int i = 1; i <= n; ++i)
	    {
	        int num;
	        cin >> num;
	        memo.push_back(num);
	    }
	    for (int i = 0; i < p; ++i)
	    {
	        if (memo[i] == 0)
	        {
	            total += x;
	        }
	        else
	        {
	            total += y;
	        }
	    }
	    cout << total << "\n";
	}
	
	return 0;
}
