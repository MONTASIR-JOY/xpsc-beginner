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
        if(x>=n)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = (n - x) / 4;
        if((n-x)%4>0)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}