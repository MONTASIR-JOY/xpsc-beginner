#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, d;
    cin>>n>>d;
    vector<long long> v(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    long long rem = n;
    long long ans = 0;
    for(long long i:v)
    {
        long long need = (d + i - 1) / i;
        if(d%i==0)
        {
            need++;
        }
        if(rem - need>=0)
        {
            rem -= need;
            ans++;
        }
        if(rem<=0)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}