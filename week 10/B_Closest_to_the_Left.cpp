#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q;i++)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n-1;
        int ans = -1;
        int mid = (l + r) / 2;
        while(l<=r)
        {
            mid = (l + r) / 2;
            if(x>=v[mid])
            {
                l = mid + 1;
                ans = mid;
            }
            else {
                r = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
        return 0;
}