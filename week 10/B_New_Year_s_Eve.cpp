#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin>>n>>k;
    if(k==0)
    {
        cout << 0 << endl;
        return 0;
    }
    long long ans = pow(2, __lg(n));
    if(k==1)
    {
        cout <<  n << endl;
        return 0;
    }
    cout << 2*ans-1 << endl;
    return 0;
}