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
        vector<pair<int,int>> v(n);
        vector<int> b(n);
        int mx = 0;
        int s = 0;

        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        
        int sum = 0;

        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n;i++)
        {
            if()
        }

            if (s >= sum)
            {
                cout << mx << endl;
                continue;
            }
        sum -= s;

        int pl = (sum + 3 - 1) / 3;
        mx += pl;
        cout << mx << endl;
    }
    return 0;
}