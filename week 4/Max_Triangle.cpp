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
        if(n<=3)
        {
            cout << -1 << endl;
        }
        else{
            cout << n + n - 1 + n - 2 << endl;
        }
    }
    return 0;
}