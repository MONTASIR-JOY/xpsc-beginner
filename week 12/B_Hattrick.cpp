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
        vector<char> v(6);
        for (int i = 0; i < 6;i++)
        {
            cin >> v[i];
        }
        bool ans = false;
        for (int i = 2; i < 6;i++)
        {
            if(v[i-2]=='W' && v[i-1]=='W' && v[i]=='W')
            {
                ans = true;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}