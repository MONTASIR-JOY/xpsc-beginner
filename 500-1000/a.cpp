#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    long long sum = (k * (k + 1)) / 2;
    vector<long long> v(n);
    set<long long> s;
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    for(long long i:s)
    {
        if(i<=k)
        {
            sum -= i;
        }
    }
    cout << sum << endl;
    return 0;
}