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
        long long sum = 0;
        map<long long, long long> mp;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            v[i] = v[i] % 3;
            sum += v[i];
            mp[v[i]]++;
        }
        if(sum%3==0)
        {
            cout << 0 << endl;
        }
        else if(mp[sum%3]>0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 3-sum%3 << endl;
        }
    }
    return 0;
}