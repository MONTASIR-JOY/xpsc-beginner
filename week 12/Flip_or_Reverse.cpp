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
        string a, b;
        cin >> a >> b;
        vector<pair<int, int>> p;
        int r = 0;
        int l = 0;
        while(r<n)
        {
            if(a[r]!=b[r])
            {
                int k = r;
                while(a[k]!=b[k] && k!=n)
                {
                    k++;
                }
                p.push_back({r+1, k});
                r = k;
            }
            r++;
        }
        cout << p.size() << endl;
        for(auto val:p)
        {
            cout << 1 << " " << val.first << " " << val.second << endl;
        }
    }
    return 0;
}