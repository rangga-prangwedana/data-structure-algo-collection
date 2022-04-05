// Binary search using for loop
// Only for sorted array

#include <iostream>
using namespace std;

#define ll long long

int main() {
    int arr[] = {1, 2, 2, 3, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(*arr);
    int k = 0;
    int target = 6;
    
    for (int b = n/2; b >= 1; b /= 2)
    {
        while (k + b < n && arr[k+b] <= target)
        {
            k += b;
        }
        if (arr[k] == target)
        {
            cout << k << "\n";
        }
    }

    return 0;
}
