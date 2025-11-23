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
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        bool swct = false;
        long long zero = 0;
        long long cnt = 0;
        for (long long i = 0; i < n-1;i++)
        {
            if(v[i]>0)
            {
                swct = true;
                cnt += v[i];
            }
            if(swct)
            {
                if(v[i]==0)
                    zero++;
            }
            
        }
        cout << zero+cnt << endl;
    }

    return 0;
}