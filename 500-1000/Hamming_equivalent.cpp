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
        vector<long long>v(n);
        bool x = true;
        for (long long i = 0;i<n;i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n;i++)
        {
            if(v[i]!=i+1)
            {
                long long a =__builtin_popcount(v[i]);
                long long b = __builtin_popcount(i+1);
                if(a!=b)
                {
                    x = false;
                    break;
                }
            }
        }
        if (x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}