#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]!=s[i+1] && s[i]=='0')
            {
                cnt0++;
            }
            if(s[i]!=s[i+1] && s[i]=='1')
            {
                cnt1++;
            }
        }
        cout << min(cnt0, cnt1) << endl;
    }
    return 0;
}