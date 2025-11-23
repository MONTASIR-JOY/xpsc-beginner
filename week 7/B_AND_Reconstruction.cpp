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
        vector<int> v(n - 1);
        for (int i = 0; i < n-1;i++)
        {
            cin >> v[i];
        }
        
        // for(int i:v)
        // {
        //     cout << i << " ";
        // }
        
        if(n==2)
        {
            cout << v[0] << " " << v[0] << endl;
            continue;
        }

        vector<int> ans(n);
        ans[0] = v[0];
        ans[n-1] = v[n - 2];
        for (int i = 1; i < n-1;i++)
        {
            ans[i] = v[i] | v[i - 1];
        }
        bool x = true;

        for (int i = 0; i < n-1;i++)
        {
            if(v[i]!=(ans[i]&ans[i+1]))
            {
                x = false;
                break;
            }
        }
        if(x)
        {
            for(int i:ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}