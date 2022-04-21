#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
	    int a, b, c;
	    cin >> a >> b >> c;
	    int sum = a + b + c;
	    
	    if (sum == 180)
	    {
	        cout << "YES" << "\n";
	    }
	    else
	    {
	        cout << "NO" << "\n";
	    }
	}
	return 0;
}
