#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll maxpair(const vector<ll>& numbers)
{
    ll max1 = 0, max2;
    
    ll n = numbers.size();

    for (int i = 0; i < n; i++)
    {
        if (numbers[max1] < numbers[i])
        {
            max1 = i;
        }
    }
    
    if (max1 == 0)
    {
        max2 = 1;
    }
    else{
        max2 = 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (i != max1 && numbers[max2] < numbers[i])
        {
            max2 = i;
        }
    }

    return numbers[max1] * numbers[max2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<ll> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    ll product = maxpair(numbers);
    cout << product << "\n";
    return 0;
}
