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
        cin >> s;
        int z = 0;
        int o = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else{
                o++;
            }
        }
        if(o<z)
        {
            cout << "No" << endl;
            continue;
        }
        bool ans = true;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='0')
            {
                if(i>0 && s[i-1]=='1')
                {
                    s[i - 1]='2';
                }
                else if(i<n-1 && s[i+1]=='1')
                {
                    s[i + 1]='2';
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
        if(ans)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}