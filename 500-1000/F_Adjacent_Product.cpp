#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    vector<long long> v(n - 1);
    for (long long i = 0; i < n - 1;i++)
    {
        v[i] = a[i] * a[i + 1];

    }
    for(long long i:v)
    {
        cout << i << " ";
    }
        return 0;
}