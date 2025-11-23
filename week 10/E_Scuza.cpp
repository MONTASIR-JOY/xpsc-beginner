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
        vector<long long> v(n);
        vector<long long> st(n);
        long long mn = LLONG_MIN;
        
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            mn = max(mn, v[i]);
            st[i] = mn;
        }
        vector<long long> pre(n);
        pre[0] = v[0];
        for (long long i = 1; i < n;i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
            while (q--)
            {
                long long x;
                cin >> x;
                auto it = upper_bound(st.begin(), st.end(), x);
                if(it - st.begin()-1<0)
                {
                    cout << 0 << " ";
                    continue;
                }
                cout << pre[it - st.begin()-1] << " ";
            }
        cout << endl;   
    }
    return 0;
}