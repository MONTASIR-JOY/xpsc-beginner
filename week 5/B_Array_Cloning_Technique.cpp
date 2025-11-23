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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        map<int, int> mp;
        int mx = -1;
        int tar = 0;

        for(int i:v)
        {
            mp[i]++;
            if(mp[i]>mx)
            {
                mx = mp[i];
                tar = i;
            }
        }
        if(mx==n)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = mx;
        int op = 0;
        int rem = n - cnt;
        while(cnt+mx<n)
        {
            cnt += mx;
            op += mx;
            mx *= 2;
            op++;
        }
        if(cnt<n)
        {
            op++;
            op += n - cnt;
        }
        cout << op << endl;
    }
    return 0;
}