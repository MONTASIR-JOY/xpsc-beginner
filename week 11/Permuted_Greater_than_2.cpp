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
        int x, y, z;
        cin >> x >> y >> z;
        int n = x + y + z;
        // if(x==3 && y==0 && z==1)
        // {
        //     cout << "No" << endl;
        //     continue;
        // }
        if(x>z && y>=1)
        {
            cout << "No" << endl;
            continue;
        }
        else if(x>z+1)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}