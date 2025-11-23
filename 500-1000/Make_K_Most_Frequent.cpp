#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        vector<long long> cnt(21);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }
        long long mx = *max_element(cnt.begin(), cnt.end());

        if(cnt[k]==mx)
        {
            cout << 0 << endl;
            continue;
        }
        vector<long long> pre = cnt;
        vector<long long> suff = cnt;
        bool x = false;
        for (long long i = 0; i < n;i++)
        {
            mx = *max_element(pre.begin(), pre.end());
            if(mx==pre[k])
            {
                x = true;
            }
            pre[v[i]]--;
        }
        for (long long i = n-1; i >= 0;i--)
        {
            mx = *max_element(suff.begin(), suff.end());
            if(mx==suff[k])
            {
                x = true;
            }
            suff[v[i]]--;
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