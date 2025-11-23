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
        int cnt = a * b;
        if(cnt%4==0)
        {
            cout << cnt / 4 << endl;
        }
        else{
            cout << cnt / 4 + 1 << endl;
        }
    }
    return 0;
}