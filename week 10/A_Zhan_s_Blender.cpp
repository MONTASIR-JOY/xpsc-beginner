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
        long long x, y;
        cin >> x>> y;
        long long div = min(x, y);
        if(n%div==0)
        {
            cout << n / div << endl;
            continue;
        }
        cout << n / div + 1 << endl;
    }
    return 0;
}