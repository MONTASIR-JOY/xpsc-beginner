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
        string a;
        string b;
        cin >> a;
        cin >> b;

        map<char, long long> mp;
        map<char, long long> mp1;
        bool x = true;

        for (long long i = 0; i < a.size();i++)
        {
            mp[a[i]-'a']++;
        }
        for (long long i = 0; i < b.size();i++)
        {
            mp1[b[i]-'a']++;
        }
        int k = b.size()-1;
        vector<long long> v;
        for (int i = a.size()-1; i >= 0;i--)
        {
            if(a[i]==b[k])
            {
                k--;
                v.push_back(i + 1);
            }
        }
        if(k!=-1)
        {
            cout << -1 << endl;
            continue;
        }
        
        sort(v.begin(), v.end());
        // for(int i:v)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        map<long long, long long> mp2;
        for(long long i:v)
        {
            mp2[i]++;
        }
        long long idx = 0;
        long long cost = 0;
        for (long long k = 0; k < a.size();k++)
        {
            long long i = k + 1;
            bool y = false;
            
            if(mp2[i]==0)
            {
                cost += i - idx;
                idx++;
            }
        }
        cout << cost << endl;
    }

    return 0;
}