#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Before swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    swap(a, b);

    cout << "After Swaping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}