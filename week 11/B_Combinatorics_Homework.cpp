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
        vector<long long> a(3);
        long long m;
        cin >> a[0] >> a[1] >> a[2] >> m;
        sort(a.begin(), a.end());
        long long maxi = a[0] + a[1] + a[2] - 3;
        long long mini = a[2] - (a[0] + a[1]) - 1;
        if(m >= mini && m <= maxi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}