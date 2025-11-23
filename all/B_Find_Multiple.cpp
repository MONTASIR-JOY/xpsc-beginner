#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;
    long long mul = a / c;
    if(a%c==0)
    {
        cout << a << endl;
    }
    else
    {
        mul++;
        if(mul*c>b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mul * c << endl;
        }
    }
    return 0;
}