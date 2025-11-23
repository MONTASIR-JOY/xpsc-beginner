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
        int n, x;
        cin >> n >> x;
        vector<int> ans(n + 1);
        ans[0] = 0;
        for (int i = 1; i < n+1;i++)
        {
            if((i^x)<=n && (i^x)!=0)
            {
                cout << (i ^ x) <<" ";
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}