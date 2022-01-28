#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";
    cout << s << endl;

    string s2;
    s2 = "def";
    cout << s2 << endl;

    string *sp = new string;
    *sp = "mno";
    cout << *sp << endl;

    vector<string> v;
    v.push_back(s);
    v.push_back("Raman");

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }

    string s3;
    cin >> s3;
    cout << s3;
    getline(cin, s3);
    cout << s3 << endl;

    s3 = "Pawan Shah";
    cout << s3[1] << endl;

        return 0;
}