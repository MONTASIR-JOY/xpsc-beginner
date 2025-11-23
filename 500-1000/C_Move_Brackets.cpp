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
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int fr = 0;
        int bc = 0;
        int ans = 0;

        for (int i = 0; i < n;i++)
        {
            if(s[i]==')' && fr<=0)
            {
                ans++;
            }
            else if(s[i]==')')
            {
                fr--;
            }
            else{
                fr++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}