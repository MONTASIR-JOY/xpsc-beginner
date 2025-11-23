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

        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        map<long long, long long> bit;

        for (long long i = 0; i < n;i++)
        {
            for (long long j = 0; j < 30;j++)
                if ((a[i] >> j) & 1)
                {
                    bit[j]++;
                }
        }
        // for (long long i = 0; i < 30;i++)
        // {
        //     cout << bit[i] << " ";
        // }
        long long sum = 0;
        long long sum1 = 0;
        for (long long i = 0; i < n;i++)
        {
            for (long long j = 0; j < 30;j++)
            {
                if((a[i]>>j)&1)
                {
                    sum1 += (n-bit[j]) * pow(2, j);
                }
                else
                {
                    sum1 += (bit[j]) * pow(2, j);
                }
            }
            sum = max(sum1, sum);
            sum1 = 0;
        }
        cout << sum << endl;
    }
    return 0;
}