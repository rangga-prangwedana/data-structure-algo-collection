#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, arr[100];
    while (cin >> arr[n])
    {
        n++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
