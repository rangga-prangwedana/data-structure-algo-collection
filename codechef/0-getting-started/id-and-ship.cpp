#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
	    char x;
	    cin >> x;
	    if (x == 'B' || x == 'b')
	    {
	        cout << "BattleShip" << "\n";
	    }
	    else if (x == 'C' || x == 'c')
	    {
	        cout << "Cruiser" << "\n";
	    }
	    else if (x == 'D' || x == 'd')
	    {
	        cout << "Destroyer" << "\n";
	    }
	    else if (x =='F' || x == 'f')
	    {
	        cout << "Frigate" << "\n";
	    }
	}
	return 0;
}
