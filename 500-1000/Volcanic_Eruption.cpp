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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);

        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        vector<long long> l(n);
        vector<long long> r(n);
        long long h = 1e9+7;

        for (long long i = 0; i < n;i++)
        {
            if(v[i]==0)
            {
                l[i] = 0;
                h = 0;
            }
            else if(v[i]>h)
            {
                h = v[i];
                l[i] = h;
            }
            else 
            {
                l[i] = h;
            }
        }
        
        h = 1e9+7;
        for (long long i = n-1; i >= 0;i--)
        {
            if(v[i]==0)
            {
                r[i] = 0;
                h = 0;
            }
            else if(v[i]>h)
            {
                h = v[i];
                r[i] = h;
               
            }
            else 
            {
                r[i] = h;
            }
        }

        for (long long i = 0; i < n;i++)
        {
            long long mn = min(l[i], r[i]);
            cout << (mn + k - 1) / k << " ";
        }
        cout << endl;
    }
    return 0;
}