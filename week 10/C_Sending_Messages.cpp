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
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long> v(n+1);
        v[0] = 0;
        for (long long i = 1; i < n+1;i++)
        {
            cin >> v[i];
        }
        bool ans = true;
        for (long long i = 1; i < n +1 ; i++)
        {
            if(f<=0)
            {
                ans = false;
            }
            if((v[i]-v[i-1])*a<b)
            {
                f-=(v[i]-v[i-1])*a;
            }
            else{
                f -= b;
            }
        }
        if(f<=0)
        {
            ans = false;
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}