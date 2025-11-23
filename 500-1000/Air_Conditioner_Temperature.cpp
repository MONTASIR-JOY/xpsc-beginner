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
        int a,b,c;
        cin >> a >> b >> c;
        bool x = false;
        if(c>a && c>b)
        {
            cout << "No" << endl;
        }
        else if(a>b)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}