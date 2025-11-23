#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        string s1;
        cin >> s;
        cin >> s1;
        int cnt = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='G' && s1[i]=='B')
            {
                continue;
            }
            else if(s1[i]=='G' && s[i]=='B')
            {
                continue;
            }
            else if(s[i]==s1[i])
            {
                continue;
            }
            else{
                cnt++;
            }
        }
        if(cnt>0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}