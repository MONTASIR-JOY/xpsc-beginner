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
        for (long long i= 0; i < n;i++)
        {
            cin >> v[i];
        }
        long long ans = 0;
        for(long long i:v)
        {
            if(i%2==0)
            {
                ans += i / 2;
            }
            else
            {
                ans += i / 2;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}