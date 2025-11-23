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
        long long sum=0;
        sort(v.begin(),v.end());
        sum = max(abs(v[0] - v[n - 1]) - 1, sum);
        cout<<sum<<endl;
    }
    return 0;
}