#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, temp;
    int arr[1001] = {};
    int cacahmax = 0;
    int maks = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp]++;

        if (cacahmax < arr[temp] || (cacahmax == arr[temp] && temp > maks))
        {
            cacahmax = arr[temp];
            maks = temp;
        }
    }

    cout << maks << "\n";

    return 0;
}
