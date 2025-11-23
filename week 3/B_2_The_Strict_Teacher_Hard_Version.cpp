#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        set<int> se;
        for (int i = 0; i < m;i++)
        {
            int x;
            cin >> x;
            se.insert(x);
        }

        while(q--)
        {
            int x;
            cin >> x;
            if(se.upper_bound(x)==se.end())
            {
                cout << n - *(--se.end()) << endl;
                continue;
            }
            if(se.upper_bound(x)==se.begin())
            {
                cout << *se.begin() - 1<< endl;
                continue;
            }
            // cout << *(--se.end()) << endl;
            
            cout <<( *se.upper_bound(x)- *(--se.lower_bound(x)))/2 << endl;
        }
    }
    return 0;
}