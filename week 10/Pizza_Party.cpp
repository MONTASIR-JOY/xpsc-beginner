#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    a++;
    int p = a * 4 + b * 3;
    cout << p / 8 + (p % 8 > 0) << endl;
    return 0;
}