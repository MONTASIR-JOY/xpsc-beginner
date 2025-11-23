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
        if(n==1)
        {
            cout << -1 << endl;
            continue;
        }

        if(n==3)
        {
            cout << "1 2 -3" << endl;
            continue;
        }

        if(n%2==0)
        {
            for (int i = 0; i < n/2;i++)
            {
                cout << "1 ";
            }
            for (int i = 0; i < n/2;i++)
            {
                cout << "-1 ";
            }
            cout << endl;
        }
        else{
            for (int i = 0; i < n/2-1;i++)
            {
                cout << "1 ";
            }
            cout << "1 2 -3 ";

            for (int i = n/2+2; i < n;i++)
            {
                cout << "-1 ";
            }
        }
    }
    return 0;
}