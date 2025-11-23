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
        sort(v.begin(),v.end());
        if(k==1)
        {
            cout << v[0] + v[n - 2] + v[n - 1] * 2 << endl;
            continue;
        }
        long long sum = v[0] + v[n - 1] + v[n - 2];
        long long r = n - 2;
        long long l = 1;
        long long id = (n - 2) - k+1;
        sum += v[id];
        cout << sum << endl;
    }
    return 0;
}