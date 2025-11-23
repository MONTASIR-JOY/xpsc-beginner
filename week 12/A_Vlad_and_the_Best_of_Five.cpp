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
        int n = 5;
        string s;
        cin >> s;
        map<char, int> mp;
        for(char i:s)
        {
            mp[i]++;
        }
        if(mp['A']>mp['B'])
        {
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    return 0;
}