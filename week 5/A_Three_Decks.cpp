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
        long long a, b, c;
        cin >> a >> b >> c;
        bool ans = false;
        long long sum = a + b + c;
        if(sum%3==0)
        {
            ans = true;
        }

        long long dis = c - b;

        long long disab = b - a;
        bool ans1 = false;
        if(dis>=disab)
        {
            ans1 = true;
        }

        if(ans && ans1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}