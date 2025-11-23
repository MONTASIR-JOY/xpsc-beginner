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
        int a[4];
        bool x = true;
        for (int i = 0; i < 4;i++)
        {
            cin >> a[i];
            if(a[i]==1)
            {
                x = false;
            }
        }
        if(x)
        {
            cout << "IN" << endl;
        }
        else{
            cout << "OUT" << endl;
        }
    }
    return 0;
}