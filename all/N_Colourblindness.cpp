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
        string a, b;
        cin >> a;
        cin >> b;
        bool x = false;
        for (int i = 0; i < a.size();i++)
        {
            if((a[i]=='G' || a[i]=='B') && b[i]=='R')
            {
                x = true;
                break;
            }
            if((b[i]=='G' || b[i]=='B') && a[i]=='R')
            {
                x = true;
                break;
            }
        }
        if(!x)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}