#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int j = 0;
    bool a[28];
    for (int i = 0; i < 28;i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a'] = 1;
    }
    char ans;
    bool flag = false;
    for (int i = 0; i < 26;i++)
    {
        if(a[i]!=1)
        {
            ans = char(i + 'a');
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << ans << endl;
    }
    else 
    {
        cout << "None" << endl;
    }
    return 0;
}