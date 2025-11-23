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
        vector<long long> d;
        
        multiset<long long,greater<long long>> dup;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            dup.insert(v[i]);
            d.push_back(*dup.begin());
        }
        // for(long long i:d)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        long long k = 0;
        long long sum = 0;
        long long dp = 0;
        for (long long i = n-1; i >=0;i--)
        {
            if(i==n-1)
            {
                cout<<d.back()<<" ";
                d.pop_back();
                k++;
                continue;
            }

            sum += v[n - k];
            dp = sum;

            dp += d.back();
            d.pop_back();
            k++;
            cout << dp << " ";
        }

        cout << endl;
    }
    return 0;
}