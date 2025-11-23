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
        multiset<long long> ml;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            ml.insert(x);
        }
        long long op = 0;
        auto it = ml.begin();
        for (long long i = 0; i < n;i++)
        {
            op+=(abs(*it-i));
            it++;
        }
        cout << op << endl;
    }
    return 0;
}