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
        reverse(s.begin(), s.end());
        string ans;
        int low = 0;
        int up = 0;
        for (int i = 0; i < s.size();i++)
        {
            if (s[i] == 'b')
            {
                low++;
                continue;
            }
            if (s[i] == 'B')
            {
                up++;
                continue;
            }
            if(isupper(s[i]))
            {
                if(up==0)
                {
                    ans.push_back(s[i]);
                }
                else
                {
                    up--;
                    continue;
                }
            }
            if(islower(s[i]))
            {
                if(low==0)
                {
                    ans.push_back(s[i]);
                }
                else{
                    low--;
                    continue;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}