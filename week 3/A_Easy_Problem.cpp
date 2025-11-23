#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long  t;
    cin >> t;
    while(t--)
    {
        long long  n;
        cin >> n;
        if(n==0)
        {
            cout << 0 << endl;
            continue;
        }
        cout << n - 1 << endl;
    }
    return 0;
}