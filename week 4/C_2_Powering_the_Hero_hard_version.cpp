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
        vector<long long> v(n);

        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        priority_queue<long long> pow;

        long long ans = 0;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==0)
            {
                if(!pow.empty())
                {
                    ans += pow.top();
                    pow.pop();
                }
            }
            else{
                pow.push(v[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}