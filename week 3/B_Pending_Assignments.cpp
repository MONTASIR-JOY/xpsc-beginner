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
        long long a, b, c;
        cin >> a >> b >> c;
        long long time1 = a * b;
        long long time2 = c * 24 * 60;
        if(time1<=time2)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}