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
        string a, b, c;
        cin >> a >> b >> c;
        string ans;
        ans.push_back(a[0]);
        ans.push_back(b[0]);
        ans.push_back(c[0]);
        cout << ans << endl;
    }
    return 0;
}