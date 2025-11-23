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

        int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if(sum<n)
        {
            cout << "NO" << endl;
            continue;
        }

        if(k==0 && sum%n!=0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}