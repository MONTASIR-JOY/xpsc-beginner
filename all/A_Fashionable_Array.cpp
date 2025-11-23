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
        deque<long long> dq(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> dq[i];
        }
        sort(dq.begin(), dq.end());
        // for(long long i:dq)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        long long lev = 0;
        long long lod = 0;
        long long rev = 0;
        long long rod = 0;
        for (long long i = 0; i < n;i++)
        {
            if(dq[i]%2==0)
            {
                lev = i;
                break;
            }
        }
        for (long long i = 0; i < n;i++)
        {
            if(dq[i]%2==1)
            {
                lod = i;
                break;
            }
        }
        reverse(dq.begin(), dq.end());
        for (long long i = 0; i < n;i++)
        {
            if(dq[i]%2==0)
            {
                rev = i;
                break;
            }
        }
        for (long long i = 0; i < n;i++)
        {
            if(dq[i]%2==1)
            {
                rod = i;
                break;
            }
        }
        cout << min(lev + rev, lod + rod) << endl;
    }
    return 0;
}