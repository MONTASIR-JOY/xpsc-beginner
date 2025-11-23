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
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        bool x = true;
        if(c<a)
        {
            x = false;
        }
        if(d<b)
        {
            x = false;
        }
        if(x)
        {
            cout << "POSSIBLE" << endl;
        }
        else{
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}