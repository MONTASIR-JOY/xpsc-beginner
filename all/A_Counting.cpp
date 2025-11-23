#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if(abs(a-b)==1)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << abs(a - b) + 1 << endl;
    return 0;
}