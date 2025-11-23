#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    if(n%10==0)
    {
        cout << n / 10 << endl;
    }
    else if(n>=0)
    {
        cout << (n + 10 - 1) / 10 << endl;
    }
    else{
        cout << -(((-n + 10 - 1) / 10) -1)<< endl;
    }
    return 0;
}