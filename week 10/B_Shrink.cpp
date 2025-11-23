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
        v[0] = 1;
        v[n - 1] = 2;
        long long k = 3;
        for (long long i = 1; i < n - 1;i++)
        {
            v[i] = k;
            k++;
        }
        for(long long i:v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}