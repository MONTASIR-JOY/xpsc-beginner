#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int after = 4 - s.size();
    for (int i = 0; i < after;i++)
    {
        cout << 0;
    }
    cout << s << endl;
    return 0;
}