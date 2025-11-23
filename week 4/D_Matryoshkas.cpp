#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        multiset<int> ms;
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }
        int ans = 0;
        while(!ms.empty())
        {
            int curr = *ms.begin();
            ms.erase(ms.begin());
            while(ms.find(curr+1)!=ms.end())
            {
                curr++;
                ms.erase(ms.find(curr));
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}