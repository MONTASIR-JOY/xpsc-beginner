#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long  t;
    cin >> t;
    while (t--)
    {
        long long  n, m;
        cin >> n >> m;
        
        if(n==1)
        {
            cout << "YES" << endl;
            cout << m << endl;
            continue;
        }
        if(n>m)
        {
            cout << "NO" << endl;
            continue;
        }
        if(n%2==0)
        {
           
            long long  rem = m - n + 2;
            if(rem%2==0)
            {
                cout<<"YES"<<endl;
                cout << rem / 2 << " " << rem / 2<<" ";
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
            for (long long  i = 0; i < n-2;i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            cout << "YES" << endl;
            long long  rem = m - n + 1;
            cout << rem << " ";
            for (long long  i = 0; i < n-1;i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
