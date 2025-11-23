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
        map<long long, long long> start;
        map<long long, long long> end;

        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin>>x;
            if(start[x]==0)
            {
                start[x] = i+1;
            }
            end[x] = i;
        }
        
        while (k--)
        {
            long long a, b;
            cin >> a >> b;
            if(start[a]==0 || end[b]==0)
            {
                cout << "NO" << endl;
            }
            else if(start[a]<=end[b])
            {
                cout << "YES"  << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    
        
    }
    return 0;
}