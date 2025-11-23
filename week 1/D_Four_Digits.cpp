#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int b = 4 - s.size();
    for (int i = 0; i < b;i++)
        cout << 0;
    cout << s;
    return 0;
}