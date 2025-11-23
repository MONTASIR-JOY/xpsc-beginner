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
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        for(long long i=0;i<n;i++)
		{
			long long idx = lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin();
			long long idx2 = upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin();
            ans += idx2-idx;
		}
        cout << ans << endl;
    }
    return 0;
}