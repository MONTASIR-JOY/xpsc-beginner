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
        long long n, m;
        cin >> n >> m;
        int mn = (n * m+2) / 3;
        cout << mn << endl;
    }
    return 0;
}