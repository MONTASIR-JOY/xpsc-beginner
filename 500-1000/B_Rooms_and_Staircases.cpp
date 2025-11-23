#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin >> s;
        long long mx = 0;
        long long l = 0;
        long long r = 0;
        for (long long i = 0; i < n;i++)
        {
            if (s[i] == '1')
            {
                r = i + 1;
            }
        }
        for (long long i = n-1; i >= 0;i--)
        {
            if(s[i]=='1')
            {
                l = n-i;
            }
        }
        //cout << l << " " << r<<endl;
        mx = max(l,r);
        mx = 2 * mx;
        cout << max(mx, n) << endl;
    }
    return 0;
}