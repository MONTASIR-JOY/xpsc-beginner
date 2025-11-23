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
        long long n, k, l;
        cin >> n >> k >> l;
        vector<long long> songs;
        for (long long i = 0; i < n; i++)
        {
            long long m, li;
            cin >> m >> li;
            if (li == l)
            {
                songs.push_back(m);
            }
        }
        if (songs.size() < k)
        {
            cout << -1 << endl;
            continue;
        }
        sort(songs.begin(), songs.end(), greater<long long>());
        long long sum = 0;
        for (long long i = 0; i < k; i++)
        {
            sum += songs[i];
        }
        cout << sum << endl;
    }
    return 0;
}