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
        long long n;
        cin >> n;
        long long pr = n * 50;
        cout << pr * 30 / 100 << endl;
    }
    return 0;
}