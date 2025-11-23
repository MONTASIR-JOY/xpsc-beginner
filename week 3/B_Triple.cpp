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
        map<int,int> mp;

        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        bool ans = false;

        for(auto val:mp)
        {
            if(val.second>=3)
            {
                cout << val.first << endl;
                ans = true;
                break;
            }
        }
        if(ans==false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}