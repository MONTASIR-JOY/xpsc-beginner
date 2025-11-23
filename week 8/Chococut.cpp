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
        long long a, b, k;
        cin >> a >> b >> k;
        long long ansa = k/a;
        long long ansb = k/b;
        long long ans = 0;
        if(k%a!=0)
        {
            ansa++;
        }
        if(k%b!=0)
        {
            ansb++;
        }
        ans = min(ansa * a, ansb * b);
        if(ans>a*b)
        {
            cout << 0 << endl;
        }
        else{
            cout <<a*b - ans << endl;
        }
        
    }
    return 0;
}