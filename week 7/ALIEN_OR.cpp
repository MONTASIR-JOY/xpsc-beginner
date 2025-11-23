#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> v(n);
        set<string> se;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            se.insert(v[i]);
        }
        bool ans = true;
        string s;
        for (int i = 0; i < k;i++)
        {
            s.push_back('0');
        }
        for (int i = 0; i < k; i++)
        {
            s[i] = '1';
            if(se.find(s)==se.end())
            {
                ans = false;
                break;
            }
            s[i] = '0';
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}