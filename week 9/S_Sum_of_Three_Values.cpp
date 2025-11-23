#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;
    vector<pair<long long,long long>>v;
    for (long long i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    
    sort(v.begin(),v.end());

    for (int i = 0; i < n;i++)
    {
        int rem = s - v[i].first;
        int l = i + 1;
        int r = n - 1;
        while(l<r)
        {
            int a = v[l].first;
            int b = v[r].first;
            if(a+b==rem)
            {
                cout << v[i].second + 1 << " " << v[l].second + 1 << " " << v[r].second +1 << endl;
                return 0;
            }
            else if(a+b>rem)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}