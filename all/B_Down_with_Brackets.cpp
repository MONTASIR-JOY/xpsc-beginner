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
        string s;
        cin >> s;
        int op = 1;
        int cl = 0;
        if(s.size()<=2)
        {
            cout << "NO" << endl;
            continue;
        }
        bool x = false;
        for (int i = 1; i < s.size();i++)
        {
            if(s[i]=='(' && s[i-1]==')' && op==0)
            {
                x = true;
                break;
            }
            if(s[i]=='(')
            {
                op++;
            }
            if(s[i]==')')
            {
                op--;
            }
        }
        if (x)
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