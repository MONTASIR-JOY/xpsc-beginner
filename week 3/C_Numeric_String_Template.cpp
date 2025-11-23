#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int q;
        cin >> q;

        while (q--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            map<char, int> mp;
            map<int, char> mp1;
            bool flag = true;

            for (int i = 0; i < n; i++)
            {
                if (mp.count(s[i]))
                {
                    if (mp[s[i]] != a[i])
                    {
                        flag = false;
                        break;
                    }
                }
                else if (mp1.count(a[i]))
                {
                    if (mp1[a[i]] != s[i])
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    mp[s[i]] = a[i];
                    mp1[a[i]] = s[i];
                }
            }
            for(auto val:mp)
            {
                cout << mp.count(val.first) << endl;
            }
            for(auto val:mp1)
            {
                cout << mp1.count(val.first) << endl;
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}