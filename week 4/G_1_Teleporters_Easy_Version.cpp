#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n, c;
        cin >> n >> c;
        vector<int> v;
        set<int> s;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
            v.push_back(x+i+1);
        }

       
        long long ans = 0;

        long long cnt = 0;
        sort(v.begin(),v.end());

        for (long long i = 0; i < n;i++)
        {
            
            if(ans>c)
            {
                break;
            }
            else if(ans+v[i]<=c)
            {
                ans += v[i];
                cnt++;
            }
            
        }
        cout << cnt << endl;
    }
    return 0;
}