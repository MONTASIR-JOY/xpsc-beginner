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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        long long cnt = 0;
        for (long long i = 0; i < n;i++)
        {
            long long
             id = i + 1;
            if(abs(v[i]-id)%k!=0)
            {
                cnt++;
            }
        }
        if(cnt%2==0)
        {
            cnt /= 2;
        }
        else{
            cnt /= 2;
            cnt++;
        }
        if(cnt<=1)
        {
            cout << cnt << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}