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
        long long sum = 0;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        cout << sum << endl;
    }
    return 0;
}