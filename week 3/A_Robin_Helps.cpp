#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  t;
    cin >> t;
    while(t--)
    {
        long long  n, k;
        cin >> n >> k;
        long long  gold = 0;

        vector<long long > v(n);
        for (long long  i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        long long  ans = 0;
        for (long long  i = 0; i < n;i++)
        {
            if(v[i]>=k)
            {
                gold += v[i];
            }
            if(v[i]==0 && gold>=1)
            {
                ans++;
                gold--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}