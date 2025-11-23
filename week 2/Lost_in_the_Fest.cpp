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
        vector<int>v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        reverse(v.begin(), v.end());

        int ans = 0;

        for (int i = 0; i < n;i++)
        {
            if(v[i]>=v[0])
            {
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}