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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    ans.push_back({1, j+1});
                    swap(a[j], a[j + 1]);
                }
            }
        }
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    ans.push_back({2, j+1});
                    swap(b[j], b[j + 1]);
                }
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i]>b[i])
            {
                swap(a[i],b[i]);
                ans.push_back({3,i+1});
            }
        }
        // for(int i:a)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(int i:b)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        cout << ans.size() << endl;
        for(auto val:ans)
        {
            cout << val.first << " " << val.second << endl;
        }
    }
    return 0;
}