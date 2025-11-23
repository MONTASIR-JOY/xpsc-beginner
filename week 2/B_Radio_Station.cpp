#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> server;
    //map<string, string> conf;

    for (int i = 0; i < n;i++)
    {
        string s, s1;
        cin >> s >> s1;
        server.push_back({s, s1});
    }
    for (int i = 0; i < m;i++)
    {
        string s, s1;
        cin >> s >> s1;
        s1.pop_back();
        for (int i = 0; i < n;i++)
        {
            if(server[i].second==s1)
            {
                cout << s << " " << s1 << "; #" << server[i].first << endl;
                continue;
            }
        }
    }

        return 0;
}