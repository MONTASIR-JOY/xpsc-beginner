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
        long long n, m, k;
        cin >> n >> m >> k;
        set<long long> s;
        set<long long> s1;
        set<long long> s2;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            if(x<=k)
            {
                s.insert(x);
                s2.insert(x);
            }
        }
        for (long long i = 0; i < m;i++)
        {
            long long x;
            cin >> x;
            if(x<=k)
            {
                s1.insert(x);
                s2.insert(x);
            }
        }
        if(s2.size()==k && s.size()>=k/2 && s1.size()>=k/2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}