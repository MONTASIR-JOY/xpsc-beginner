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
        long long n, q;
        cin >> n >> q;
        long long sum = 0;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        for (long long i = 0;i<n-1;i++)
        {
            sum += min(v[i], v[i + 1]);
        }
        while(q--)
        {
            long long id, val;
            cin >> id >> val;
            id--;
            if(id>0)
            {
                sum -= min(v[id - 1], v[id]);
            }
            if(id<n-1)
            {
                sum -= min(v[id + 1], v[id]);
            }

            v[id] = val;

            if(id>0)
            {
                sum += min(v[id - 1], v[id]);
            }
            if(id<n-1)
            {
                sum += min(v[id + 1], v[id]);
            }
            cout << sum << endl;
        }
    }
    return 0;
}