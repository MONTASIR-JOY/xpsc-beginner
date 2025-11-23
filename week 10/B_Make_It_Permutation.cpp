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
        cout << 1 + (n - 2) * 2 << endl;
        long long val = 2;
        for (long long i = 2; i < n;i++)
        {
            cout << i << " "<<1 << " " << val << endl;
            cout << i << " "<<n-val+1 << " " << n << endl;
            val++;
        }
        cout << n << " " << 1 << " " << n << endl;
    }
    return 0;
}