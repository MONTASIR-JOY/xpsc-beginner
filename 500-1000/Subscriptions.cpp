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
        int n,c;
        cin >> n >> c;
        int cnt = n / 6;
        if(n>cnt*6)
        {
            cnt++;
        }
        cout << cnt * c << endl;
    }
    return 0;
}