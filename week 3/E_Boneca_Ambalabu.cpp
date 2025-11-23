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
        if(n==1)
        {
            cout << "0" << endl;
            continue;
        }
        long long a[n];
        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
            // cout << a[i] << " ";
        }
        
        sort(a, a + n);
        long long ans = 0;

        int mul = 0;
        long long abc = a[0] ^ a[n - 1];

        for (int i = 0; i < n;i++)
        {
            if(abc<=(a[i]^a[n-1]))
            {
                mul = a[i];
                abc = a[i] ^ a[n - 1];
            }
        }
        for (long long i = 0; i < n; i++)
        {
            ans+=mul^a[i];
        }
        cout << ans << endl;
    }
  
        return 0;
}