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
        bool ans = false;
        if(n%2==1)
        {
            cout << "YES" << endl;
            continue;
        }
        while(n!=0)
        {
            n = n / 2;
            if(n%2==1 && n>1)
            {
                ans = true;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}