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
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        v[0] = 1;
        if(n!=1)
        {
            v[1] = 2;
        }
        int total = 3;
        if(n==1)
        {
            total = 1;
        }
        for (int i = 2; i < n; i++) 
        {
            v[i] = v[i - 1] + v[i - 2];
            total += v[i];
        }
        // for (int i = 0; i < n;i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        string s;
        while(m--)
        {
            int w, l, h;
            cin >> w >> l >> h;
            // cout << w << " " << l << " " << h << endl;

            int mn = min(min(l,w),h);

            bool ans = true;
            if(mn>=v[n-1])
            {
                l -= v[n-1];
                w -= v[n-1];
                h -= v[n-1];
                // cout << l << " " << w << " " << h << endl;
                int mx = max({l, w, h});
                if(v.size()>=2)
                {
                    if(v[n-1]!=1 && mx<v[n-2] )
                    {
                        ans = false;
                    }
                }
            }
            else{
                ans = false;
            }
            if(ans)
            {
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
        }
        cout << s << endl;
    }
    return 0;
}