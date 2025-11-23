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
        cin >> s;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='1')
            {
                cout << 0;
            }
            else{
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}