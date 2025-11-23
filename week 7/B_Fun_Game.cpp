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

        int l = -1;
        int r = -1;
        int lt = -1;
        int rt = -1;
        bool x = true;
        bool y = true;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='1' && x)
            {
                l = i;
                x = false;
            }
            if(s[i]=='0' && y)
            {
                r = i;
                y = false;
            }
        }
        x = true;
        y = true;

        for (int i = 0; i < n;i++)
        {
            if(t[i]=='1' && x)
            {
                lt = i;
                x = false;
            }
            if(t[i]=='0' && y)
            {
                rt = i;
                y = false;
            }
        }

        // cout << l <<" "<< r << endl;
        // cout << lt <<" "<< rt << endl;
        if(lt==-1)
        {
            cout << "YES" << endl;
            continue;
        }
        if(l<=lt && l!=-1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}