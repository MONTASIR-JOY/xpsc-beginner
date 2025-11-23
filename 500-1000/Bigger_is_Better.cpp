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
        int cnt = 0;
        for (int i = 0;i<s.size();i++)
        {
            if(s[i]=='z')
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout << -1 << endl;
        }
        else{
            for (int i = 0; i < n;i++)
            {
                cout<<'z';
            }
            cout << endl;
        }
    }
    return 0;
}