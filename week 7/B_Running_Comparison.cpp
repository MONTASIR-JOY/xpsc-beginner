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

        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long cnt = 0;

        for (long long i = 0; i < n;i++)
        {
            bool x = false;
            bool y = false;

            if(b[i]<=2*a[i])
            {
                x = true;
            }
            if(a[i]<=2*b[i])
            {
                y = true;
            }

            if(x&& y)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}