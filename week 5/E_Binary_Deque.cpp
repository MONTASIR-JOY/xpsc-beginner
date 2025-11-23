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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        int l = 0;
        int r = 0;
        int sum = 0;
        int ans = INT_MIN;

        while(r<n)
        {
            sum += v[r];

            if(sum==s)
            {
                ans = max(ans, r - l + 1);
            }
            if(sum>s)
            {
                while(sum>s)
                {
                    sum -= v[l];
                    l++;
                }
                if(sum==s)
                {
                    ans = max(ans, r - l + 1);
                }
            }
            r++;
        }
        if(ans==INT_MIN)
        {
            cout << -1 << endl;
            continue;
        }
        cout << n-ans << endl;
    }
    return 0;
}