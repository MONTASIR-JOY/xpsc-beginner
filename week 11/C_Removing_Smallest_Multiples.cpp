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
        string t;
        cin >> t;
        long long ans = 0;
        string s = " " + t;
        vector<bool> bl(n+1,false);
        for (long long i = 1; i <= n;i++)
        {
            // if(s[i]=='0')
            // {
            //     ans += i;
            //     cout << i << " ";
            // }
            for (long long j = i; j <= n;j+=i)
            {
                if(s[j]=='0')
                {
                    ans += i;
                    s[j] = '1';
                    bl[j] = true;
                }
                else if(bl[j])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}