#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a;
    double b;
    cin >> a >> b;

    long long bconvert = (long long)(b * 100);

    cout << (a * bconvert) / 100 << endl;
    return 0;
}