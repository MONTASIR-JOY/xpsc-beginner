#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long>v(n);
    for (long long i = 0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long k;
    cin >> k;
    while(k--)
    {
        long long d;
        cin >> d;
        auto it = upper_bound(v.begin(), v.end(), d);
        // if(it==v.begin() && *it!=v[0])
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        cout << it-v.begin() << endl;
    }
    return 0;
}