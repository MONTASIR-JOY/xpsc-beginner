#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  t;
    cin>>t;
    while(t--)
    {
        long long  a, b, n, s;
        cin >> a >> b >> n >> s;

        bool ans = true;
        long long  onemust = s % n;
        if(onemust>b)
        {
            ans = false;
        }

        if(a*n+b<s)
        {
            ans = false;
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}