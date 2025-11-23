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
        string s;
        cin >> s;
        long long n = s.size();
        long long mini = LLONG_MAX;

        for (char i = 'a'; i <= 'z'; i++)
        {
            long long cnt = 0;
            long long maxi = 0;
            for (long long j = 0; j < n; j++)
            {
                if(s[j] != i)
                {
                    cnt++;
                    maxi = max(maxi, cnt);
                }
                else
                {
                    cnt = 0;
                }
            }
            mini = min(maxi, mini);
        }
        if(mini == 0)
        {
            cout << 0 << endl;
            continue;
        }
        long long ans = 0;
        while(mini)
        {
            mini /= 2;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}