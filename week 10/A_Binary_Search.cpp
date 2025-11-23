#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long n,q;
    cin >> n >> q;
    vector<long long> v(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    while(q--)
    {
        long long x;
        cin >> x;
        long long l = 0;
        long long r = n - 1;
        long long mid = (l + r) / 2;
        bool ans = false;
        while(l<=r)
        {
            mid = (l + r) / 2;
            if(v[mid]==x)
            {
                ans = true;
                break;
            }
            else if(x>v[mid])
            {
                l = mid + 1;
            }
            else{
                r = mid - 1;
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