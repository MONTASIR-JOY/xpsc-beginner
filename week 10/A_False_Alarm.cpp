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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        bool x = true;
        bool ans = true;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==1 && x==true)
            {
                i += k;
                i--;
                x = false;
                continue;
            }
            if(v[i]==1 && x==false)
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}