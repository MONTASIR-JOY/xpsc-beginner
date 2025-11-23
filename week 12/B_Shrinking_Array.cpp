#include<bits/stdc++.h>
using namespace std;
void solve ()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    bool ans = false;
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i > 0 && abs(v[i] - v[i-1]) <= 1)
        {
            ans = true;
        }
    }
    if(ans)
    {
        cout << 0 << endl;
        return;
    }
    vector<long long> a = v;
    vector<long long> b = v;
    
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    if(a[0]==v[0])
    {
        bool ans = false;
        for (long long i = 0; i < n; i++)
        {
            if(v[i]!=a[i])
            {
                cout<<1<<endl;
                return;
            }
        }
        cout << -1 << endl;
    }
    else if(b[0]==v[0])
    {
        bool ans = false;
        for (long long i = 0; i < n; i++)
        {
            if(v[i]!=b[i])
            {
                cout<<1<<endl;
                return;
            }
        }
        cout << -1 << endl;
    }
    else 
    {
        cout << 1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}