//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,bil;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int faktor = 0;
        cin >> bil;

        int divisor = 1;
        while (divisor * divisor <= bil)
        {
            if (bil % divisor == 0)
            {
                faktor++;
            }
            divisor++;
        }
        if (faktor > 2)
        {
            cout << "BUKAN" << "\n";
        }
        else
        {
            cout << "YA" << "\n";
        }
    }
    return 0;
}
