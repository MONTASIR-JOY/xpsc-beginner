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
        vector<int> v(n);
        string s;
        cin>>s;
        int ans = 0;
        for (int i = 0; i < n - 2;i++)
        {
            string t;
            t.push_back(s[i]);
            t.push_back(s[i+1]);
            t.push_back(s[i+2]);
            if(t=="map" || t=="pie")
            {
                i += 2;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}