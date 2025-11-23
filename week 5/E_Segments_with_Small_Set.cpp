#include<bits/stdc++.h>
using namespace std;

long long fun(vector<long long>s,long long k)
{
        long long ans=0;
        long long l=0;
        long long r=0;
        long long n=s.size();

        map<long long,long long>cnt;

        while(r<n)
        {
            cnt[s[r]]++;
            
            if(cnt.size()<=k)
            {
                ans+=(r-l+1);
                // cout << l << " " << r << " " <<ans<< endl;
            }
            else
            {
                while(cnt.size()>k && l<=r)
                {
                    cnt[s[l]]--;
                    if(cnt[s[l]]==0)
                    {
                        cnt.erase(s[l]);
                    }
                    l++;
                }
                if(cnt.size()<=k)
                {
                    ans+=r-l+1;
                    // cout << l << " " << r << " " <<ans<< endl;
                }
            }
            r++;
        }
        return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    cout << fun(v, k) << endl;
    return 0;
}