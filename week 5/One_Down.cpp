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
        string t;
        cin >> s >> t;
        if(s==t)
        {
            cout << "Yes" << endl;
            continue;
        }
        int ot = 0;
        int zt = 0;
        int os = 0;
        int zs = 0;
        bool ans = true;
        for (int i = 0; i < n;i++)
        {
            if(t[i]=='1')
            {
                if(s[i]=='0')
                {
                    ans = false;
                }
                ot++;
            }
            else{
                zt++;
            }

            if(s[i]=='1')
            {
                os++;
            }
            else{
                zs++;
            }

        }
        if(ans==false || ot>os)
        {
            cout << "No" << endl;
            continue;
        }

        if((ot-os)%2==0)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}