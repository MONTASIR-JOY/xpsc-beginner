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
        vector<pair<int,int>> a(n);
        vector<int> b(n);
        for (int i = 0; i < n;i++)
        {
            cin>>a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        int id = 0;
        for (int i = 0; i < n;i++)
        {
            if(a[i].first==b[0])
            {
                id = i;
                break;
            }
        }
        vector<pair<int, int>> ans(n);
        for (int i = 0; i < n;i++)
        {
            ans[i].second = b[i];
            ans[i].first = abs(a[id].first - b[i]);
            //cout << ans[i].first << " " << ans[i].second << endl;
        }
        sort(ans.begin(), ans.end());
        
        bool x = true;
        for (int i = 0; i < n;i++)
        {
            if(ans[i].second!=b[i])
            {
                x = false;
            }
        }
        if(x)
        {
            cout << id+1<< endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}