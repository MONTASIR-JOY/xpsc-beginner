#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long n;
    cin>>n;
    long long m;
    cin >> m;
    long long ans = pow(2, n);
    cout << m%ans << endl;
    return 0;
}