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
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        if(n==1)
        {
            if(v[0]==0)
            {
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
            continue;
        }
        if(v[n-1]==0)
        {
            reverse(v.begin(), v.end());
        }

        if(v[0]!=0)
        {
            cout << 0 << endl;
            continue;
        }
        long long ans = 0;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]!=i)
            {
                ans++;
            }
        }
        if(n%2==1)
        {
            ans++;
        }
        long long an = pow(2, ans);
        cout << an % 998244353 << endl;
    }
    return 0;
}