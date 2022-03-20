#include <bits/stdc++.h>
using namespace std;

void faktor(int n)
{
    int nilai = n;
    int div = 2;
    int pangkat = 0;

    while (nilai > 1)
    {
        if (nilai % div == 0)
        {
            pangkat++;
            nilai /= div;
        }

        if ((nilai % div != 0) || nilai == 1)
        {
            if (pangkat > 1)
            {
                cout << div << "^" << pangkat;
            }
            else if (pangkat == 1)
            {
                cout << div;
            }

            // Print multiply
            if ((nilai > 1) && pangkat > 0)
            {
                cout << " x ";
            }
            pangkat = 0;
            div++;
        }
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    faktor(n);

    return 0;
}