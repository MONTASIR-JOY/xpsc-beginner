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
        int a;
        cin >> a;
        if(a<=50)
        {
            cout << "LEFT" << endl;
        }
        else
        {
            cout << "RIGHT" << endl;
        }
    }
    return 0;
}