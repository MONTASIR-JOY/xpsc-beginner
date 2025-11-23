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
        long long n, m;
        cin >>n >> m;

        vector<long long> v(m);
        for (long long i = 0; i < m;i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        // for (long long i = 0; i < m;i++)
        // {
        //     cout<< v[i];
        // }
        long long sum = 0;
        for (long long i = 0; i < m-1;i++)
        {
            if(v[i]!=1)
            {
                sum += v[i] - 1;
            }
        }
        for (long long i = 0; i < m-1;i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}