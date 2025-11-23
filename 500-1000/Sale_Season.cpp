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
        if(n<=100)
        {
            cout << n << endl;
            continue;
        }
        if(n<=1000)
        {
  
            cout << n - 25 << endl;
            continue;
        }
        if(n<=5000)
        {
            cout << n - 100 << endl;
            continue;
        }
        cout << n - 500 << endl;
    }
    return 0;

}