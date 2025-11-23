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
        long long mx = LLONG_MIN;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        for (long long i = 0; i < n;i++)
        {
            mx = mx & v[i];
        }
        cout << mx << endl;
    }
    return 0;
}