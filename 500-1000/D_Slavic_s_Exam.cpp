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
        string s;
        cin >> s;
        string t;
        cin >> t;
        int n = t.size();
        string ans(s.size(), 'a');
        int j = 0;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]=='?')
            {
                if(j!=n)
                {
                    ans[i] = t[j];
                    j++;
                }
                else{
                    ans[i] = 'a';
                }
            }
            else{
                if(j==n)
                {
                    ans[i] = s[i];
                }
                else if(s[i]==t[j]){
                    ans[i] = t[j];
                    j++;
                }
                else{
                    ans[i] = s[i];
                }
            }
        }
        j = 0;
       // cout << ans << endl;
        for (int i = 0; i < ans.size();i++)
        {
            if(ans[i]==t[j])
            {
                j++;
            }
        }
        if(j==n)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}