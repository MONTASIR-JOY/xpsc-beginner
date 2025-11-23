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
        string s;
        cin >> s;

        string ans;
        int low = 0;
        int up = 0;

        for (int i = s.size()-1; i >= 0;i--)
        {
            if(s[i]=='b')
            {
                low++;
            }
            else if(s[i]=='B')
            {
                up++;
            }
            else if(islower(s[i]))
            {
                if(low>0)
                {
                    low--;
                }
                else{
                    ans.push_back(s[i]);
                }
            }
            else if(isupper(s[i]))
            {
                if(up>0)
                {
                    up--;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}