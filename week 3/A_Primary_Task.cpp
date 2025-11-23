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
        string s;
        cin >> s;
        if(s.size()<3)
        {
            cout << "NO" << endl;
            continue;
        }
        if(s.size()==3)
        {
            if(s[0]=='1' && s[1]=='0' && s[2]!='1' && s[2]!='0')
            {
                cout << "YES" << endl;
            }
            else if(s[0]!='1' || s[1]!='0')
            {
                cout << "NO" << endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            continue;
        }
        if(s[0]=='1' && s[1]=='0' && s[2]!='0')
        {
            cout << "YES" << endl;
        }
        else if(s[0]!='1' || s[1]!='0')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        continue;

        
    }
    return 0;
}