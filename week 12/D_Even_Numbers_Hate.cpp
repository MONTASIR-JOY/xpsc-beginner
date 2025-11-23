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
        int n;
        cin >> n;
        vector<int> v(n);
        int even = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]%2==0)
            {
                even++;
            }
        }
        int odd = n - even;
        if(even==n)
        {
            cout << (odd + 2 - 1) / 2 << endl;
        }
        else{
            cout << even + (odd + 2 - 1) / 2 << endl;
        }
    }
    return 0;
}