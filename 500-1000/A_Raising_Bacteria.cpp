#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long cnt = 0;

    for (long long i = 0; i < 31;i++)
    {
        if((n>>i)&1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}