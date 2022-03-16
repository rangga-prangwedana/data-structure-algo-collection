#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll n, natsum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        ll inpts;
        cin >> inpts;
        natsum += inpts;
    }
   
    cout << (n * (n + 1)) / 2 - natsum << endl;
    return 0;
}