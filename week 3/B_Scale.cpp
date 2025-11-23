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
        char a[n][n];
        long long m = n / k;
        char ans[m][m];
        if(k==1)
        {
            for (long long i = 0; i < n;i++)
            {
                for (long long j = 0; j < n;j++)
                {
                    cin >> a[i][j];
                }
            }
            for (long long i = 0; i < n;i++)
            {
                for (long long j = 0; j < n;j++)
                {
                    cout << a[i][j];
                }
                cout << endl;
            }
        }
        else {
            for (long long i = 0; i < n;i++)
            {
                for (long long j = 0; j < n;j++)
                {
                    cin >> a[i][j];
                    // cout << a[i][j];
                    ans[(i + 1) / k][(j + 1) / k] = a[i][j];
                }
            }

            for (long long i = 0; i < m;i++)
            {
                for (long long j = 0; j < m;j++)
                {
                    cout << ans[i][j];
                }
                cout << endl;
            }
        }
        
    }
    return 0;
}