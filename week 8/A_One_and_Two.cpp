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
        long long two = 0;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]==2)
            {
                two++;
            }
        }
        if(two%2==1)
        {
            cout << -1 << endl;
            continue;
        }
        if(two==0)
        {
            cout << 1 << endl;
            continue;
        }
        long long cnt = 0;
        long long ans = 0;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==2)
            {
                cnt++;
            }
            if(cnt==two/2)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}