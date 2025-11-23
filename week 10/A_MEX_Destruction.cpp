#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        map<long long, long long> mp2;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            mp2[v[i]]++;
        }
        if(mp2[0]==n)
        {
            cout << 0 << endl;
            continue;
        }
        if(mp2[0]==0)
        {
            cout << 1 << endl;
            continue;
        }
        long long cnt = 0;
        map<long long, long long> mp;
        map<long long, long long> mp1;
        for (long long i = 0; i < n;i++)
        {
            mp[i] = cnt;
            if(v[i]!=0)
            {
                cnt++;
            }
        }
        cnt = 0;
        for (long long i = n - 1; i >= 0;i--)
        {
            mp1[i] = cnt;
            if(v[i]!=0)
            {
                cnt++;
            }
        }
        bool x = true;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==0)
            {
                if(mp[i]>0 && mp1[i]>0)
                {
                    x = false;
                    break;
                }
            }
        }
        if(x)
        {
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}