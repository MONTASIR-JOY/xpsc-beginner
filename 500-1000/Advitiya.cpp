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
        string t = "ADVITIYA";
        int ans = 0;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]!=t[i])
            {
                if(t[i]<s[i])
                {
                    ans += 'Z' - s[i] + t[i] - 'A' + 1;
                }
                else{
                    ans += t[i] - s[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}