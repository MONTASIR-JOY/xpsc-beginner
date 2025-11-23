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
        if(s.size()==1)
        {
            if(s[0]=='a')
            {
                char a = s[0] + 1;
                cout << a << s[0] << endl;
                continue;
            }
            else if(s[0]=='z')
            {
                char a = s[0] - 1;
                cout << a << s[0] << endl;
            }
            else{
                char a = s[0] + 1;
                cout << s[0] <<a<< endl;
            }
            continue;
        }
        bool flag = false;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]==s[i+1] && flag==false)
            {
                if(s[i]=='a')
                {
                    char a = s[i] + 1;
                    cout << s[i]<<a;
                    flag = true;
                }
                else if(s[i]=='z')
                {
                    char a = s[i] - 1;
                    cout << s[i]<<a;
                    flag = true;
                }
                else{
                    char a = s[i] + 1;
                    cout << s[i]<<a;
                    flag = true;
                }
            }
            else
            {
                cout << s[i];
            }
        }
        if(flag==false)
        {
            if(s[s.size()-1]=='a')
            {
                char a = s[s.size()-1] + 1;
                cout << a;
            }
            else if(s[s.size()-1]=='z')
            {
                char a = s[s.size()-1] - 1;
                cout << a;
            }
            else{
                char a = s[s.size()-1] + 1;
                cout << a;
            }
        }
        cout << endl;
    }
    return 0;
}