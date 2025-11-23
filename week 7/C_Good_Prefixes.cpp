// TLE KABO NA YEAH
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
        vector<long long> pre(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            if(i==0)
            {
                pre[i] = v[i];
                continue;
            }
            pre[i] = pre[i - 1] + v[i];
        }
        int cnt = 0;
        int r = 0;
        int point = 0;
        long long mx = 0;
        while(r<n)
        {
            bool ans = false;
            mx = max(mx, v[r]);
            if(pre[r]-mx==mx)
            {
                cnt++;
            }
            r++;
        }
        cout << cnt << endl;
    }
    return 0;
}