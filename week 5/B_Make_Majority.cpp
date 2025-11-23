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

        string ans;
        
        bool one = false;
        bool zero = false;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='1')
            {
                ans.push_back(s[i]);
                one = true;
                zero = false;
            }
            else if(zero==false)
            {
                ans.push_back(s[i]);
                zero = true;
            }
        }
        int o = 0;
        int z = 0;
        for (int i = 0; i < ans.size();i++)
        {
            if(ans[i]=='1')
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        if(o>z)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}