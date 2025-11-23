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
        cout << 2 << endl;

        bool yes = true;
       
        int x = n - 1;
        cout << n << " " << x << endl;
        x--;

        for (int i = 1; i < n - 1;i++)
        {
            cout << n - i +1 <<" "<< x - i +1 << endl;
        }
    }
    return 0;
}