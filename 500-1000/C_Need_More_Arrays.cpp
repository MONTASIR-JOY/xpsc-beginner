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
        cin >> n;
        vector<long long> v(n);
        set<long long> s;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        s.insert(v[0]);
        for (long long i = 1; i < n; i++)
        {
            if(*(--s.end())+1>=v[i])
            {
                continue;
            }
            else
            {
                s.insert(v[i]);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}