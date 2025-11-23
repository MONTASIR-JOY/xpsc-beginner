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
        vector<long long> a(n);
        vector<long long> b(n);

        for (long long i = 0;i<n;i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        long long ans = 0;
        for (long long i = 0; i < n;i++)
        {
            bool al = false;
            bool bo = false;

            if(b[i]<=2*a[i])
            {
                al = true;
            }
            if(a[i]<=2*b[i])
            {
                bo = true;
            }

            if(bo && al)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}