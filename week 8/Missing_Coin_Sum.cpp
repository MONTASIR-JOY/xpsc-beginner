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

    sort(v.begin(),v.end());
    long long cnt = 0;
    for (long long i = 0; i < n;i++)
    {
        if(cnt+1<v[i])
        {
            break;
        }
        cnt += v[i];
    }
    cout << cnt+1 << endl;
    return 0;
}