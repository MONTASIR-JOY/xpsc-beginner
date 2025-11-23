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
        long long n;
        cin >> n;
        vector<long long> v(n);
        map<long long, long long> mp;
        for(long long i = 0; i < n; i++) 
        {
            cin >> v[i];
            mp[v[i]] = i + 1;
        }
        long long p = 0;
        for(long long i = 0; i < n; i++) 
        {
            for(long long j = v[i]; j <= 2 * n;j+=v[i]) 
            {
                if((j-i-1)>i+1 && mp[j/v[i]]==j-i-1)
                {
                    p++;
                }
            }
        }
        cout << p << endl;
    }
    return 0;
}