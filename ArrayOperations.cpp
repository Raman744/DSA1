#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    a[0] = 2;
    a[4] = 5;

    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8};

    int c[10];
    for (int i = 0; i < 10; i++)
    {
        c[i] = i * i;
        cout << c[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << a[0] << " " << a[4] << endl;

    return 0;
}