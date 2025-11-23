#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        sort(v.begin(), v.end());

        long long j = 0;
        long long cnt = 0;

        while(j<n)
        {
            if(v[j]==0)
            {
                j++;
            }
            else if(v[j]==1)
            {
                
                if(j+1<n && v[j+1]>0)
                {
                    v[j]--;
                    v[j+1]--;
                }
                cnt++;
                j++;
            }
            else if(v[j]>1)
            {
                v[j] = 0;
                cnt++;
                j++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}