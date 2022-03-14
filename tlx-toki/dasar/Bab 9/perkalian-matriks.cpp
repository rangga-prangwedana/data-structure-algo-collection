#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, p, count;
    int matriksa[101][101], matriksb[101][101];

    cin >> n >> m >> p;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriksa[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> matriksb[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            count = 0;
            for (int k = 0; k < m; k++)
            {
                count += matriksa[i][k] * matriksb[k][j];
            }
            cout << count << " ";
        }
        cout << "\n";
    }

    return 0;
}
