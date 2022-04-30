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
	    int x;
	    cin >> x;
	    if (x >= 1 && x < 100)
	    {
	        cout << "Easy" << "\n";
	    }
	    else if (x >= 100 && x < 200)
	    {
	        cout << "Medium" << "\n";
	    }
	    else
	    {
	        cout << "Hard" << "\n";
	    }
	}
	
	return 0;
}