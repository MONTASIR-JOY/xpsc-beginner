#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    map<string, string> ans,has;
    while(t--)
    {
        string a, b;
        cin >> a >> b;

        if(has.find(a)!=has.end())
        {
            ans[has[a]] = b;
            has[b] = has[a];
            has.erase(a);
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }
    cout<<ans.size()<< endl;
    for (auto it = ans.begin(); it != ans.end();it++)     
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}

