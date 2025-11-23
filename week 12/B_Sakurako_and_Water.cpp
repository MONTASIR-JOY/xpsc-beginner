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
        long long n;
        cin >> n;
        long long a[n][n];
        for (long long i = 0; i < n;i++)
        {
            for (long long j = 0; j < n;j++)
            {
                cin >> a[i][j];
            }
        }
        long long sum = 0;
        for (long long k = 0; k < n;k++)
        {
            long long mn = 0;
            long long j = 0;
            long long i = k;
            while(i<n && j<n)
            {
                if(a[i][j]<0)
                {
                    mn = min(mn, a[i][j]);
                }
                i++;
                j++;
            }
            sum += abs(mn);
        }
        for (long long k = 1; k < n;k++)
        {
            long long mn = 0;
            long long j = k;
            long long i = 0;
            while(i<n && j<n)
            {
                if(a[i][j]<0)
                {
                    mn = min(mn, a[i][j]);
                }
                i++;
                j++;
            }
            sum += abs(mn);
        }
        cout << sum << endl;
    }
    return 0;
}