#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> v;
    for (long long i = 0; i < n;i++)
    {
        long long x;
        cin >> x;
        v.push_back({x, i + 1});
    }
    vector<long long> ans;
    sort(v.begin(), v.end());
    for (long long i = 0; i < n;i++)
    {
        long long idx = v[i].second;
        long long day = v[i].first;
        if(day>k)
        {
            break;
        }
        else{
            k -= day;
            ans.push_back(idx);
        }
    }
    cout << ans.size()<<endl;
    for(long long i:ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}