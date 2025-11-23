#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> mo(n);
        vector<int> po(m);

        for (int i = 0; i < n; i++)
        {
            cin >> mo[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> po[i];
        }

        int point1 = 0;
        int point2 = 0;
        vector<int> ans;

        while (point1 < n || point2 < m)
        {
            if (point1 < n && mo[point1] == 0)
            {
                ans.push_back(mo[point1]);
                point1++;
                k++;
            }
            else if (point2 < m && po[point2] == 0)
            {
                ans.push_back(po[point2]);
                point2++;
                k++; 
            }
            else if (point1 < n && mo[point1] <= k)
            {
                ans.push_back(mo[point1]);
                point1++;
            }
            else if (point2 < m && po[point2] <= k)
            {
                ans.push_back(po[point2]);
                point2++;
            }
            else
            {
                ans.clear();
                break;
            }
        }

        if (ans.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}