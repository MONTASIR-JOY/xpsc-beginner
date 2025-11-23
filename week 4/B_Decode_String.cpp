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
        cin>>s;
        reverse(s.begin(), s.end());
        string ans;

        int i = 0;
        while(i<n)
        {
            if(s[i]=='0')
            {
                string d;
                d.push_back(s[i + 2]);
                d.push_back(s[i+1]);
                //cout << d << endl;
                int a = stoi(d);
                char ch = 96+a;
                ans.push_back(ch);
                i++;
                i++;
                i++;
            }
           else
            {
                string d;
                d.push_back(s[i]);
                //cout << d << endl;
                int a = stoi(d);
                char ch = 96+a;
                //cout << ch << endl;
                ans.push_back(ch);
                i++;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}