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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ans = true;
        if(s[0]=='0')
        {
            cout << "NO" << endl;
            continue;
        }
        int sw = k;
        for (int i = 1; i < n;i++)
        {
            if(s[i]=='0')
            {
                sw -= 1;
            }
            else
            {
                sw = k;
            }
            if(sw<0)
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}