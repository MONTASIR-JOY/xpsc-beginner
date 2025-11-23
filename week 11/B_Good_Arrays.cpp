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
        long long cnt = 0;
        long long sum = 0;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]==1)
            {
                cnt++;
            }
            else
            {
                sum += v[i]-1;
            }
        }
        if(cnt<=sum && n!=1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}