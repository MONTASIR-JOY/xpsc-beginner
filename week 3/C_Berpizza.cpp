#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  t;
    cin>>t;
    set<pair<long long , long long >> s;
    set<pair<long long , long long >> ms;
    vector<long long > ans;
    long long  idx = 1;

    while(t--)
    {
        long long  type;
        cin >> type;
        if(type==1)
        {
            long long  money;
            cin >> money;

            s.insert({idx, money});
            ms.insert({money,-idx});
            idx++;
        }
        else if(type==2)
        {
            long long  pos = s.begin()->first;
            long long  money = s.begin()->second;
            ans.push_back(pos);
            s.erase({pos, money});
            ms.erase({money, -pos});
        }
        else
        {
            long long  pos = -ms.rbegin()->second;
            long long  money = ms.rbegin()->first;
            ans.push_back(pos);
            s.erase({pos, money});
            ms.erase(--ms.end());
        }
    }
    for(long long  i:ans)
    {
        cout << i << " ";
    }
    return 0;
}