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
        vector < pair<int, int>> v;
        int left = 1;
        int right = n*3;
        int round = 1;
        int ans = 0;
        while(left<right)
        {
            v.push_back({left, right});
            left += 3;
            right -= 3;
            
            ans++;
        }
        cout << ans << endl;
        for(auto val:v)
        {
            cout << val.first << " " << val.second << endl;
        }
    }
    return 0;
}