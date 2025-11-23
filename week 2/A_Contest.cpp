#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long e = 3 * (a / 10);
    long long f = a - (a / 250) * c;

    long long g = 3 * (b / 10);
    long long h = b - (b / 250) * d;

    long long misha = max(e, f);
    long long vasya = max(g, h);

    // cout << misha << endl;
    // cout << vasya << endl;
    if(misha>vasya)
    {
        cout << "Misha" << endl;
    }
    else if(misha<vasya)
    {
        cout << "Vasya" << endl;
    }
    else{
        cout << "Tie" << endl;
    }
    return 0;
}