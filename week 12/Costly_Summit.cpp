#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = INT_MAX;
        for (int i = 0; i < 32;i++)
        {
            map<int, int> mp;
            int t = 0;
            for (int j = 0; j < 5;j++)
            {
                if((i>>j)&1)
                {
                    mp[j]++;
                    t++;
                }
            }
            int cost = t * k;
            int a = 1;
            for (int j = 0; j < n;j++)
            {
                if (mp[s[j] - 'A'] == 0)
                {
                    cost+=a++;
                }
            }
            ans = min(ans, cost);
        }
        cout << ans << endl;
    }
    return 0;
}
