#include <bits/stdc++.h>
using namespace std;

struct murid
{
 int x,y;
};

int closer(murid i, murid j, int d)
{
    return pow(abs(j.x - i.x), d) + pow(abs(j.y - i.y), d);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d, temp;
    int maks = 0;
    int mins = INT_MAX;
    cin >> n >> d;
    murid siswa[n];

    for (int i = 0; i < n; i++)
    {
        cin >> siswa[i].x >> siswa[i].y;        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            temp = closer(siswa[i], siswa[j], d);
            if (temp > maks)
            {
                maks = temp;
            }
            if (temp < mins)
            {
                mins = temp;
            }
        }
    }

    cout << mins << " " << maks << "\n";

    return 0;
}