#include<bits/stdc++.h>
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
        if(k==0)
        {
            for (int i = 0; i < n;i++)
            {
                cout << 0;
            }
            cout << endl;
            continue;
        }
        if(n==k)
        {
            for (int i = 0; i < n;i++)
            {
                cout << 1;
            }
            cout << endl;
            continue;
        }
        cout << 1;
        k--;
        if(k==0)
        {
            for (int i = 0; i < n - 1;i++)
            {
                cout << 0;
            }
            cout << endl;
            continue;
        }
        for (int i = 1; i < n - 2-k+1;i++)
        {
            cout << 0;
        }
        for (int i = 0; i < k;i++)
        {
            cout << 1;
        }
        cout << 0 << endl;
    }
    return 0;
}