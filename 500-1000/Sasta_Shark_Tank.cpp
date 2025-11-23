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
        int a, b;
        cin >> a >> b;
        if(2*a==b)
        {
            cout << "ANY" << endl;
        }
        else if(a*2>b)
        {
            cout << "FIRST" << endl;
        }
        else{
            cout << "SECOND" << endl;
        }
    }
    return 0;
}