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
        string a = "RGB";
        string b = "RBG";
        string c = "GBR";
        string d = "GRB";
        string e = "BRG";
        string f = "BGR";
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        int cnt4 = 0;
        int cnt5 = 0;
        int cnt6 = 0;

        int j = 0;
        for (int i = 0; i < n;i++)
        {
            if(a[j]!=s[i])
            {
                cnt1++;
            }
            if(b[j]!=s[i])
            {
                cnt2++;
            }
            if(c[j]!=s[i])
            {
                cnt3++;
            }
            if(d[j]!=s[i])
            {
                cnt4++;
            }
            if(e[j]!=s[i])
            {
                cnt5++;
            }
            if(f[j]!=s[i])
            {
                cnt6++;
            }
            j++;
            if(j==3)
            {
                j = 0;
            }
        }
        cout << min({cnt1, cnt2, cnt3, cnt4, cnt5, cnt6}) << endl;
    }
    return 0;
}