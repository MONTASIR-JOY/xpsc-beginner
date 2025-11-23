#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    vector<long long> v1(m);
    vector<long long> ans;

    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for (long long i = 0; i < m;i++)
    {
        cin >> v1[i];
    }
    long long f = 0;
    long long s = 0;
    while(f<n && s<m)
    {
        if(v[f]<v1[s])
        {
            ans.push_back(v[f]);
            f++;
        }
        else if(v[f]>v1[s])
        {
            ans.push_back(v1[s]);
            s++;
        }
        else{
            ans.push_back(v[f]);
            ans.push_back(v1[s]);
            f++;
            s++;
        }
    }
    for (long long i = f; i < n;i++)
    {
        ans.push_back(v[i]);
    }
    for (long long i = s; i < m;i++)
    {
        ans.push_back(v1[i]);
    }

    for (long long i : ans)
    {
        cout << i << " ";
    }
        return 0;
}