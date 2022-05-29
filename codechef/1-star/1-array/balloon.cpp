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
	    vector <int> memo;
	    set <int> quest;
	    cin >> n;
	    for (int i = 0; i < n; ++i)
	    {
	        int nums;
	        cin >> nums;
	        memo.push_back(nums);
	    }
	    for (int i = 0; i < n; ++i)
	    {
	        if (memo[i] < 8)
	        {
	            quest.insert(memo[i]);
	        }
	        if (quest.size() == 7)
	        {
	            ans = i + 1;
	            break;
	        }
	    }
	    cout << ans << "\n";
	}
	
	return 0;
}
