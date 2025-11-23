#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int r = 0, l = 0;
        int ans = 0;
        while(l<n)
        {
            if(s[l]=='B')
            {
                ans++;
                //cout << l << " ";
                r+=k;
                l = r;
                //cout << l << endl;
            }
            else
            {
                l++;
                r++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}