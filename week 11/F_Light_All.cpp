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
        cin >> s;

        bool ans = true;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='0')
            {
                if(s[i-1]=='1' && i>0)
                {
                    s[i - 1] = '2';
                }
                else if(s[i+1]=='1' && i<n-1)
                {
                    s[i + 1] = '2';
                }
                else 
                {
                    ans = false;
                }
            }
        }
        if(ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}