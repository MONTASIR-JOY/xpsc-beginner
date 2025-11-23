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
        int n;
        cin >> n;
        string s;
        cin>>s;
 
        int l = 0;
        int cnt = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='1')
            {
                l = i;
                break;
            }
        }
        int r = 0;
        for (int i = l+1; i < n;i++)
        {
            if(s[i]=='0'&& (s[i+1]=='1' || i+1==n))
            {
                r = i;
                break;
            }
        }
        reverse(s.begin() + l, s.begin() + r +1);
        // cout << s << endl;
 
        if (s[0] == '1')
        {
            cnt += 2;
        }
        else
        {
            cnt++;
        }
        for (int i = 1; i < n;i++)
        {
            if(s[i-1]=='0' && s[i]=='1')
            {
                cnt+=2;
            }
            else if(s[i-1]=='1' && s[i]=='0')
            {
                cnt+=2;
            }
            else
            {
                cnt++;
            }
        }

        cout << cnt<< endl;
    }
    return 0;
}
 