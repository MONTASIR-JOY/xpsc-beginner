#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (long long i = 0; i < n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    cout << max(sum, 2 * a[n - 1]) << endl;
    return 0;
}