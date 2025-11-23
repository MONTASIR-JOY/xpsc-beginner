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
        int n;
        cin>>n;

        vector<string> a(n);
        vector<string> b(n);
        vector<string> c(n);

        map<string,int> mp;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        for (int i = 0; i < n;i++)
        {
            cin >> c[i];
            mp[c[i]]++;
        }

        int ansa=0, ansb=0, ansc=0;

        for(string s:a)
        {
            if(mp[s]==1)
            {
                ansa += 3;
            }
            else if(mp[s]==2)
            {
                ansa += 1;
            }
        }
        for(string s:b)
        {
            if(mp[s]==1)
            {
                ansb += 3;
            }
            else if(mp[s]==2)
            {
                ansb += 1;
            }
        }
        for(string s:c)
        {
            if(mp[s]==1)
            {
                ansc += 3;
            }
            else if(mp[s]==2)
            {
                ansc += 1;
            }
        }
        cout << ansa << " " << ansb << " " << ansc << endl;
    }
    return 0;
}

