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

        string ans;
        string v;
        v.push_back(s[0]);
        ans.push_back(s[0]);
        // cout << v.back() << endl;
        for (int i = 1; i < n-1;i++)
        {
            if(s[i]==v.back())
            {
                v.pop_back();
                v.push_back(s[i + 1]);
                ans.push_back(v.back());
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}