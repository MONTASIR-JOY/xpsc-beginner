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
        string s;
        cin >> s;
        int year = stoi(s);
        int sq = sqrt(year);
        if(sq*sq!=year)
        {
            cout << -1 << endl;
            continue;
        }
        if(sq==0)
        {
            cout << 0 << " "<< 0 << endl;
            continue;
        }
        cout << 1 <<" "<< sq - 1 << endl;
    }
    return 0;
}