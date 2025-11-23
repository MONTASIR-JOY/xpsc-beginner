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
        if(n==1)
        {
            cout << 3 << endl;
            continue;
        }
        long long cnt = 0;
        for (long long i = 1; i <= n;i*=2)
        {
            cnt++;
        }
        cout << 2*cnt+1 << endl;
    }
    return 0;
}