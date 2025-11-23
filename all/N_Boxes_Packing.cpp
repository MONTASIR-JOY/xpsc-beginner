#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> v;
    map<long long, long long> mp;
    set<long long> se;
    for (long long i = 0; i < n;i++)
    {
        cin >> a[i];
        se.insert(a[i]);
        mp[a[i]]++;
    }

    for(long long i:se)
    {
        v.push_back(i);
    }

    if(n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    sort(v.rbegin(), v.rend());
    long long cnt = mp[v[0]];
    for(long long i:v)
    {
        if(mp[i]>cnt)
        {
            cnt += (mp[i] - cnt);
        }
    }
    cout<<cnt<<endl;
    return 0;
}