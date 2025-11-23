#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<pair<long long,long long>> v;
    
    for (long long i = 0; i < n;i++)
    {
        long long x;
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end());
    long long l = 0;
    long long r = n-1;
    
    while(l<r)
    {
        long long a = v[l].first;
        long long b = v[r].first;
        if(a+b==k)
        {
            cout << v[l].second+1 << " " << v[r].second+1 << endl;
            return 0;
        }
        else if(a+b>k)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}