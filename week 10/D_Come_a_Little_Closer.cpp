#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<pair<long long, long long>> v(n);
        multiset<long long> row;
        multiset<long long> col;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i].first >> v[i].second;
            row.insert(v[i].first);
            col.insert(v[i].second);
        }
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        long long ans = LLONG_MAX;
        for (long long i = 0; i < n;i++)
        {
            long long temp1 = v[i].first;
            long long temp2 = v[i].second;
            row.erase(row.find(temp1));
            col.erase(col.find(temp2));
            long long r = (*row.rbegin() - *row.begin()) + 1;
            long long c = (*col.rbegin() - *col.begin()) + 1;
            if(r*c>n-1)
            {
                ans = min(ans, r * c);
            }
            else{
                r++;
                ans = min(ans, r * c);
                r--;
                c++;
                ans = min(ans, r * c);
                c++;
            }
            row.insert(temp1);
            col.insert(temp2);
        }
        cout << ans << endl;
    }
    return 0;
}