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
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            if(x<0)
            {
                x = -x;
            }
            v[i] = x;
        }
        int up = 0;
        for (int i = 0; i < n;i++)
        {
            if(v[0]<v[i])
            {
                up++;
            }
        }
        int down = n - up-1;

        if(up+1>=down)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}