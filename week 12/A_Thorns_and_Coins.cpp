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
        int sum = 0;

        for (int i = 0; i < n;i++)
        {
            if(s[i]=='@')
            {
                sum++;
                if((s[i+1]=='@' || s[i+1]=='.') && i<n-1)
                {
                    continue;
                }
                else if((s[i+2]=='@' || s[i+2]=='.') && i<n-2)
                {
                    i++;
                }
                else
                {
                    break;
                }
            }
            else if((s[i+1]=='@' || s[i+1]=='.') && i<n-1)
            {
                continue;
            }
            else if((s[i+2]=='@' || s[i+2]=='.') && i<n-2)
            {
                i++;
            }
            else
            {
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}