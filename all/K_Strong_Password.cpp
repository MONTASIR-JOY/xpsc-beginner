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
        string ans;
        cin >> s;
        if(s.size()==1)
        {
            if(s[0]=='z')
            {
                cout << 'a' << s[0] << endl;
                continue;
            }
            else
            {
                cout << char(s[0] + 1) << s[0] << endl;
                continue;
            }
        }
        ans.push_back(*s.begin());
        bool x = false;
        for (int i = 1; i < s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                ans.push_back(s[i]);
            }
            else if(x==false)
            {
                if(s[i]=='z')
                {
                    ans.push_back('a');
                    ans.push_back('z');
                    x = true;
                }
                else{
                    
                    ans.push_back(char(s[i] + 1));
                    ans.push_back(s[i]);
                    x = true;
                }
            }
            else{
                ans.push_back(s[i]);
            }
        }
        if(x==false)
        {
            if(s[s.size()-1]=='z')
            {
                ans.push_back('a');
            }
            else
            {
                ans.push_back(char(s[s.size() - 1] + 1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}