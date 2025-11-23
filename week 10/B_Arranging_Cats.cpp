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
        string s, t;
        cin >> s >> t;
        int mis = 0;
        int miso = 0;
        int misz = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]!=t[i])
            {
                mis++;
                if(s[i]=='0')
                {
                    miso++;
                }
                else
                {
                    misz++;
                }
            }
        }
        // cout << mis << " " << miso << " " << misz << endl;
        int minus = min(miso, misz);
        cout << mis - minus << endl;
    }
    return 0;
}