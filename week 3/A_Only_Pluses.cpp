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
        vector<long long > v(3);
        for (long long  i = 0; i < 3;i++)
        {
            cin >> v[i];
        }
        long long  a = 5;
        sort(v.begin(), v.end());
        while(a--)
        {
            v[0]++;
            sort(v.begin(), v.end());
        }
        long long  ans = 1;
        for (long long  i = 0; i < 3;i++)
        {
            ans *= v[i];
        }
        cout << ans << endl;
    }
    return 0;
}