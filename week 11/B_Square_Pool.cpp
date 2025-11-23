#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n, s;
        cin >> n >> s;
        vector <pair<long long, long long>> v(n);
        vector <pair<long long, long long>> dup(n);
        vector <pair<long long, long long>> ve(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> ve[i].first >> ve[i].second >> v[i].first >> v[i].second;
            
        }
        long long cnt = 0;
        for (long long i = 0; i < n;i++)
        {
            if(ve[i].first==-1)
            {
                long long div = v[i].first / (-ve[i].first);
                v[i].first -= div;
                v[i].second += (div*ve[i].second);
            }
            else
            {
                long long div = v[i].first / ve[i].first;
                v[i].first -= div;
                v[i].second += (div*-ve[i].second);
            }
            if(v[i].first==0 && v[i].second==s)
            {
                cnt++;
            }
            else if(v[i].first==0 && v[i].second==0)
            {
                cnt++;
            }
            else if(v[i].first==s && v[i].second==0)
            {
                cnt++;
            }
            else if(v[i].first==s && v[i].second==s)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}