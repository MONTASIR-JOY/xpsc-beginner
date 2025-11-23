#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);

    for (long long i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (long long i = 0; i < m;i++)
    {
        cin >> b[i];
    }
    long long l = 0, r = 0, cnt = 0;
    while(l<n && r<m)
    {
        long long curr = a[l];
        long long cnt1 = 0;
        long long cnt2 = 0;

        while(l<n && a[l]==curr)
        {
            cnt1++;
            l++;
        }
        while(r<m && b[r]<curr)
        {
            r++;
        }
        while(r<m && b[r]==curr)
        {
            cnt2++;
            r++;
        }
        // cout << cnt1 << " " << cnt2 << endl;
        cnt += (cnt1 * cnt2);
    }

    cout<<cnt<<endl;
    return 0;
}
