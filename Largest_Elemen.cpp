#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, largest = INT_MIN, Smallest = INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Smallest)
        {
            Smallest = a[i];
        }
    }

    cout << largest << endl;
    cout << Smallest << endl;
}