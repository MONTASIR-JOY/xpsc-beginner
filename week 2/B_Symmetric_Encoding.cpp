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
        string s;
        cin>>s;
        set<char> se;
        for (int i = 0; i < n;i++)
        {
            se.insert(s[i]);
        }
        map<char, char> mp;
        vector<char> v1;
        for (auto ch:se)
        {
            //char c = ch;
            v1.push_back(ch);
            
        }
        for (int i = 0; i < v1.size();i++){
            //cout << v1[i];
        }

        for (int i = 0; i < v1.size() / 2; i++)
        {
            // cout << v1[i] << " ";
            mp[v1[i]] = v1[v1.size() - i - 1];
            mp[v1[v1.size() - i - 1]] = v1[i];
            //cout << v1[i] << " " << v1[v1.size() - i - 1] << endl;
        }
        if(v1.size()%2!=0)
        {
            int cc = v1.size() / 2;
            mp[v1[cc]] = v1[cc];
        }

        for (char c : s) 
        {
            cout << mp[c];
        }
        cout << endl;
    }
    return 0;
}