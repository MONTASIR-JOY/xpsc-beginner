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
        vector<int> pre(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                pre[i] = v[i];
            }
            else
            {
                pre[i] = pre[i - 1] + v[i];
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (abs(pre[i] - (pre[n - 1] - pre[i])) == 0)
                {
                    cnt += 2;
                }
                else if (abs(pre[i] - (pre[n - 1] - pre[i])) == 1)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}