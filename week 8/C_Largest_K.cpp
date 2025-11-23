#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if(x>y+1)
        {
            cout << 0 << endl;
            continue;
        }
        if(x==y+1)
        {
            cout << 1 << endl;
            continue;
        }

        x -= 2;
        x++;
        cout<<y/x<<endl;
    }
    
    return 0;
}