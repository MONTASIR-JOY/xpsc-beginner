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
        int mx = INT_MIN;
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            if(i%2==0)
            {
                mx = max(mx, x);
            }
        }
        cout << mx << endl;
    }
    return 0;
}