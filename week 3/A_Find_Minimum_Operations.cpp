#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(k==1)
        {
            cout << n << endl;
            continue;
        }    

        int ans = 0;

        while(n)
        {
            ans += n % k;
            n /= k;
        }
        cout << ans << endl;
    }
    return 0;
}
