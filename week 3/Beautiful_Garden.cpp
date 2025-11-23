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
	   long long n, k, d;
        cin >> n >> k >> d;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        if(k == n)
        {
            cout << 0 <<endl;
            continue;
        }
        
        sort(arr.begin(), arr.end());

        long long m = n - k;
        long long ans = 0;

        for(int i = 0; i < m; i++)
        {
            ans += ((d - 1) / arr[i]) + 1;
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << ans <<endl;
	}
    return 0;
}