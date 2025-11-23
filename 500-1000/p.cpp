#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='9' && i==0)
        {
            continue;
        }
        else if(s[i]=='9')
        {
            s[i] = '0';
            continue;
        }

        int mn = min((int)s[i], '9' - s[i] + '0');
        s[i] = char(mn);
    }
    bool x = true;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='0' && x)
        {           
            continue;
        }
        else
        {
            cout << s[i];
            x = false;
        }
    }
    cout << endl;
    return 0;
}