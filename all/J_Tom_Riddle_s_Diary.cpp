#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        if(mp[v[i]]==0)
        {
            cout << "NO" << endl;
            mp[v[i]]++;
            continue;
        }
        cout << "YES" << endl;
    }

        return 0;
}