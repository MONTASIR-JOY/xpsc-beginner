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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> se;
        for (int i = 0; i < m;i++)
        {
            int x;
            cin >> x;
            se.insert(x);
        }

        string c;
        cin >> c;
        sort(c.begin(), c.end());

        for(int val:se)
        {
            char ch = c[c.size() - 1];
            s[val-1] = ch;
            c.pop_back();
        }

        cout << s << endl;
    }
    return 0;
}