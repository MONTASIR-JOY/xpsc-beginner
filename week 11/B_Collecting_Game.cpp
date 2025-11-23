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
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        vector<long long> v1 = v;
        sort(v1.begin(), v1.end());
        map<long long, long long> mp;
        vector<long long> pre(n);
        pre[0] = v1[0];
        for (long long i = 1; i < n;i++)
        {
            pre[i] = pre[i - 1] + v1[i];
        }
        mp[v1[n - 1]] = n - 1;
        for (long long i = n - 2; i >= 0;i--)
        {
            if(pre[i]>=v1[i+1])
            {
                mp[v1[i]] = mp[v1[i + 1]];
            }
            else
            {
                mp[v1[i]] = i;
            }
        }
        for(long long i:v)
        {
            cout << mp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}