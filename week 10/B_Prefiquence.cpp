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
        string a, b;
        cin >> a >> b;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                ans++;
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}