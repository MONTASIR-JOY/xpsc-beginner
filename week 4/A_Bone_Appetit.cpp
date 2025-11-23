#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    long long sum = a * c + b * d;
    cout << sum << endl;
    return 0;
}