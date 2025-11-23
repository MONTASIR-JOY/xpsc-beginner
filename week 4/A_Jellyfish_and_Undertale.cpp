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
        long long a, b, n;
        cin >> a >> b >> n;
        long long c = b;
        long long cnt = 0;

        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long i = 0;
        for (int i = 0; i < n;i++)
        {
            if(v[i]>=a)
            {
                cnt += a;
                cnt--;
            }
            else
            {
                cnt += v[i];
            }
        }
        cout << cnt + b << endl;
    }
    return 0;
}