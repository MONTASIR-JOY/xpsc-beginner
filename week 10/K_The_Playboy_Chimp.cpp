#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long q;
    cin >> q;
    while(q--)
    {
        long long x;
        cin >> x;
        auto itl = lower_bound(v.begin(), v.end(), x);
        if (itl == v.begin())
        {
            cout << "X ";
        }
        else
        {
            cout << *(itl - 1) << " ";
        }
        
        auto itu = upper_bound(v.begin(), v.end(), x);
        if (itu == v.end())
        {
            cout << "X" << endl;
        }
        else
        {
            cout << *itu << endl;
        }
    }
    return 0;
}