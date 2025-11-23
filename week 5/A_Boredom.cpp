#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    multiset<long long,greater<long long>> ms;
    map<long long,long long> mp;

    for (long long i = 0; i < n;i++)
    {
        long long x;
        cin >> x;
        ms.insert(x);
        mp[x]++;
    }

    long long sum = 0;
    auto i = ms.begin();
    for (auto it = ms.begin(); it != ms.end();it++)
    {
        i++;
        auto nxt =i;
        
        if(*it*mp[*it]>*nxt*mp[*nxt] || i==ms.end())
        {
            sum += *it * mp[*it];
           // cout << *it << " " << mp[*it] << endl;
            if(ms.find(*it+1)!=ms.end())
            {
                mp[*it + 1] = 0;
            }
            if(ms.find(*it-1)!=ms.end())
            {
                mp[*it - 1] = 0;
            }
            
        }
        //cout << mp[1] << endl;
    }

    cout << sum << endl;

    return 0;
}