#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, int> mp;
    for (int i = 0; i < n;i++)
    {
        string s;
        string s1;
        cin >> s >> s1;
        pair<string, string> p = {s, s1};
        mp[p]++;
    }
    cout << mp.size() << endl;
    return 0;
}