#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n, a, b, c;
	    cin >> n >> a >> b >> c;
	    b -= a;
	    int total = a;
	    if (b <= 0)
	    {
	        cout << "NO" << "\n";
	        continue;
	    }
	    
	    if (b - c >= 0)
	    {
	        total += c;
	    }
	    
	    else if (b - c < 0)
	    {
	        total += b;
	    }
	    
	    if (total < n)
	    {
	        cout << "NO" << "\n";
	    }
	    else
	    {
	        cout << "YES" << "\n";
	    }
	    
	}
	
	return 0;
}
