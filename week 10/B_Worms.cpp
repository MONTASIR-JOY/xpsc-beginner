#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n;i++){
        cin >> v[i];
    }
    vector<long long> pre(n + 1);
    pre[0] = 0;
    pre[1] = v[0];
    for (long long i = 2; i < n+1;i++)
    {
        pre[i] = pre[i - 1] + v[i-1];
    }
    
    cout << endl;
    long long q;
    cin >> q;
    while(q--)
    {
        long long x;
        cin >> x;
        auto it = lower_bound(pre.begin(), pre.end(), x);
        cout << it - pre.begin() << endl;
    }
    return 0;
}