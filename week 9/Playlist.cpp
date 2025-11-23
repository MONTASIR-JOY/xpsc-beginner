#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    int l = 0, r = 0;
    map<int, int> mp;
    int cnt = 0;

    while(r<n)
    {
        mp[v[r]]++;
        if(mp.size()==(r-l+1))
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            while(mp.size()!=(r-l+1) && l<=r)
            {
                mp[v[l]]--;
                if(mp[v[l]]==0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            if(mp.size()==(r-l+1))
            {
                ans = max(ans, r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
