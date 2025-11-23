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
        long long zero = 0;
        long long one = 0;
        long long other = 0;
        for(long long i:v)
        {
            if(i==0)
            {
                zero++;
            }
            else if(i==1)
            {
                one++;
            }
            else{
                other++;
            }
        }
        if(zero<=(n+1)/2)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            if(other)
            {
                cout << 1 << endl;
            }
            else
            {
                if(one==0)
                {
                    cout << 1 << endl;
                }
                else 
                {
                    cout << 2 << endl;
                }
            }
            
        }
    }
    return 0;
}