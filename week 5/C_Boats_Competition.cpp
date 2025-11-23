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
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int ans = -1;
        for (int i = 1; i <= 100;i++)
        {
            int l = 0;
            int r = n - 1;
            int s = i;

            int cnt = 0;

            while(l<r)
            {
                if(v[l]+v[r]==s)
                {
                    cnt++;
                    r--;
                    l++;
                }
                else if(v[l]+v[r]<s)
                {
                    l++;
                }
                else{
                    r--;
                }
            }

            ans = max(ans, cnt);
        }

        cout << ans << endl;
    }
    return 0;
}