#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<bool> v(26);
    for (int i = 0; i < s.size();i++)
    {
        v[s[i] - 'a'] = true;
    }
    for (int i = 0; i < 26;i++)
    {
        if(!v[i])
        {
            cout << char(i + 'a');
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}