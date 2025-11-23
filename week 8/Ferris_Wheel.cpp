#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    vector<long long> v(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long l = 0;
    long long r = n-1;
    long long cnt = n;
    while(l<r)
    {
        if(v[l]+v[r]<=x)
        {
            cnt--;
            l++;
            r--;
        }
        else if(v[l]+v[r]>x)
        {
            r--;
        }
    }
    cout << cnt << endl;
    return 0;
}