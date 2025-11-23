#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int found = 0;

        for (int i = s.size() - 1; i >=0 ;i--)
        {
            if(found==0 && s[i]=='0')
            {
                cnt++;
                // cout << i << " ";
            }
            else if(found==0 && s[i]!='0')
            {
                found = 1;
            }
            else if(found==1 && s[i]=='0')
            {
                continue;
            }
            else if(found==1 && s[i]!='0')
            {
                cnt++;
                // cout << i << " ";
            }
        }
        
        cout << cnt << endl;
    }
    return 0;
}