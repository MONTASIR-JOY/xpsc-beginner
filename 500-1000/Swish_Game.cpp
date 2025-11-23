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
        int m, k;
        cin >> m >> k;
        string s;
        cin >> s;
        int sw = 0;
        for (int i =0; i < m;i++)
        {
            if(s[i]=='S')
            {
                sw++;
            }
        }
        if(sw>=k)
        {
            cout << m << endl;
            continue;
        }
        int n = m+(k-sw)-1;
        cout << n << endl;
    }
    return 0;
}