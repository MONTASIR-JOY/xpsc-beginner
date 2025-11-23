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
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        string s;

        map<char, int> mp;

        for (int i = 0; i < 26;i++)
        {
            mp[i + 'a'] = 0;
        }

        for(int i:v)
        {
             for(auto it:mp)
             {
                if(it.second==i)
                {
                    s.push_back(it.first);
                    mp[it.first]++;
                    break;
                }
             }
        }

        cout << s << endl;
    }
        return 0;
}