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
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        long long cnt = 0;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==1)
            {
                cnt += n;
                continue;
            }
            long long temp = 1;
            long long m = min(n,(long long)32);
            for (long long j = 0; j < m;j++)
            {
                temp *= v[i];
                if(temp>1e9)
                {
                    break;
                }
                if(temp<=v[j])
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}