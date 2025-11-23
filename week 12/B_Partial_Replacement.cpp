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
        long long n,k;
        cin >> n>>k;
        string s;
        cin >> s;
        long long cnt = 0;
        vector<long long> v;
        for (long long i = 0; i < n;i++)
        {
            if(s[i]=='*')
            {
                cnt++;
                v.push_back(i);
            }
        }
        if(cnt<=2)
        {
            cout << cnt << endl;
            continue;
        }
        cnt = 1;
        long long r = v[0];
        while(r != v[v.size()-1])
        {
            auto it = upper_bound(v.begin(), v.end(), r + k);
            --it;
            r = *it;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}