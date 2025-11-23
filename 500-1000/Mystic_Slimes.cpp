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
        vector<int>v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        int mx = 0;
        for (int i = 0; i < n;i++)
        {
            int val = v[i];
            if(i==1)
            {
                val -= v[0];
            }
            if(i==n-2)
            {
                val -= v[n - 1];
            }
            mx = max(val, mx);
        }
        cout << mx << endl;
    }
    return 0;
}