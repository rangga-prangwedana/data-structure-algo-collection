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
	    int a, b, c;
	    cin >> a >> b >> c;
	    if (a < b)
	    {
	        swap(a, b);
	    }
	    if (b < c)
	    {
	        swap(b, c);
	    }
	    cout << a + b << "\n";
	        
	}
	
	return 0;
}
