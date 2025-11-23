#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long cnt = 1;
    long long ans = 0;
    for (long long i = 0; i < n;i++)
    {
        if(v[i]>=cnt)
        {
            cnt++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}