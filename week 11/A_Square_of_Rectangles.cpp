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
        vector<pair<long long, long long>> p;
        long long totalarea = 0;
        for (long long i = 0; i < 3;i++)
        {
            long long x, y;
            cin >> x >> y;
            totalarea += (x * y);
            p.push_back({x, y});
        }
        sort(p.rbegin(), p.rend());

        long long tol = p[0].first;
        long long tor = p[0].second;
        for (long long i = 1; i < 2;i++)
        {
            if(tol>tor)
            {
                tor += p[i].second;
                tol = p[i].first;
            }
            else
            {
                tol += p[i].first;
                tor = p[i].second;
            }
        }
        
        long long sq = sqrt(totalarea);
        if(sq==tol)
        {
            tor += p[2].second;
        }
        else if(sq==tor)
        {
            tol += p[2].first;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if(tol==tor && sq*sq==totalarea)

        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}