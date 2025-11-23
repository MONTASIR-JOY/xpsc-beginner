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
        int a, b, c;
        cin >> a >> b >> c;

        int forfirst = abs(a - 1);
        int forsec = abs(b - c) + abs(c - 1);

        if(forfirst==forsec)
        {
            cout << 3 << endl;
        }
        else if(forfirst<forsec)
        {
            cout << "1" << endl;
        }
        else{
            cout << "2" << endl;
        }
    }
    return 0;
}