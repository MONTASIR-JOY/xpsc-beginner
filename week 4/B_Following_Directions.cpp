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
        pair<int, int> f = {1, 1};
        pair<int, int> st = {0,0};
        bool ans = false;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='U')
            {
                st.first += 1;
            }
            if(s[i]=='D')
            {
                st.first -= 1;
            }
            if(s[i]=='L')
            {
                st.second -= 1;
            }
            if(s[i]=='R')
            {
                st.second += 1;
            }

            if(st.first==f.first && st.second==f.second)
            {
                ans = true;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
                cout << "NO" << endl;
        }

    }
    return 0;
}