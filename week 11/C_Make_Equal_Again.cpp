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
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        long long l = 0;
        while(1)
        {
            if(v[l+1]!=v[l])
            {
                break;
            }
            l++;
        }

        long long r = n-1;

        while(1)
        {
            if(v[r-1]!=v[r])
            {
                break;
            }
            r--;
        }

        if(l>=r && v[r]==v[l])
        {
            cout << 0 << endl;
            continue;
        }

        if(v[l]!=v[r])
        {
            long long maxi = max(l, n - r - 1);
            cout << n-maxi-1 << endl;
            continue;
        }
        
        cout << r - l - 1 << endl;
    }
    return 0;
}