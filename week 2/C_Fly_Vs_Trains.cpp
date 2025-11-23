#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        double d,v1,v2,vf; 
        cin >> d >> v1 >> v2 >> vf;
        int ans = d/(v1+v2)*vf;
        cout << ans << endl;
    }
    return 0;
}