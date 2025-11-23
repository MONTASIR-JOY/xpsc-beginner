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
        map<long long, long long> cnt;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            cnt[x]++;
        }
        priority_queue<long long> pq;
        for(auto val:cnt)
        {
            pq.push(val.second);
        }

        while(!pq.empty())
        {
            if(pq.size()>=2)
            {
                long long x = pq.top();
                pq.pop();

                long long y = pq.top();
                pq.pop();

                x--;
                y--;

                if(x>0)
                {
                    pq.push(x);
                }

                if(y>0)
                {
                    pq.push(y);
                }
            }
            else {
                break;
            }
        }

        long long ans = 0;

        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}