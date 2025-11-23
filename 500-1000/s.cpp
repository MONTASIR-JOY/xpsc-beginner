#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    bool flag1 = false;
    bool flag2 = false;
    int n = s.size();
    for (int i = 0; i < n-1;i++)
    {
        if (s[i] == 'A' &&s[i + 1] == 'B' && flag1 == false)
        {
            i++;
            flag1 = true;
            continue;
        }
        if (s[i] == 'B' && s[i+1]=='A' && flag1==true)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    flag1 = false;
    flag2 = false;

    for (int i = 0; i < n-1;i++)
    {
        if (s[i] == 'B' && s[i+1]=='A' && flag1 == false)
        {
            i++;
            flag1 = true;
            continue;
        }
        if (s[i] == 'A' && s[i+1]=='B' && flag1==true)
        {
            cout << "YES" << endl;
            return 0;
        }
        
    }
    if(flag2)
    {
        cout << "YES" << endl;
        return 0;
    }
        cout << "NO" << endl;
    return 0;
}