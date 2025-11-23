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
        long long n,m;
        cin >> n >> m;

        vector<long long> a(n);
        vector<long long> b(m);

        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        long long mx = LLONG_MIN;
        for (long long i = 0; i < m;i++)
        {
            cin >> b[i];
            mx = max(mx, b[i]);
        }
        mx = n - mx;
        sort(a.begin()+mx, a.end());

        for(long long i:a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}