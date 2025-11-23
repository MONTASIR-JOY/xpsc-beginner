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
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(sum%k==0)
            cout << sum / k << endl;
    
        else
            cout << sum / k + 1 << endl;
    }
    return 0;
}