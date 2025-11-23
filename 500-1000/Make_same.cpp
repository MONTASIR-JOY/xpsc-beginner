#include<bits/stdc++.h>
using namespace std;
int zerocount(string s,int n)
{
    int z = 0;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='0')
        {
            z++;
        }
    }
    return z;
}
int onecount(string s,int n)
{
    int o = 0;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='1')
        {
            o++;
        }
    }
    return o;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s1;
        string s2;
        string s3;
        cin >> s1;
        cin >> s2;
        cin >> s3;
        int s1o = onecount(s1,n);
        int s2o = onecount(s2,n);
        int s3o = onecount(s3,n);
        
        int s1z = zerocount(s1,n);
        int s2z = zerocount(s2,n);
        int s3z = zerocount(s3,n);

        int tz = s1z + s2z + s3z;
        int to = s1o + s2o + s3o;
        // cout << tz << " " << to << endl;

        if(tz==0 || to==0)
        {
            cout << 0 << endl;
            continue;
        }
        int a = tz / 2;
        int b = to / 2;
        if(a!=to && b!=tz)
        {
            cout << -1 << endl;
            continue;
        }
        int ans1 = min(min(s2z, s2o), min(s3z, s3o));
        int ans2 = min(min(s1z, s1o), max(min(s2z, s2o), min(s3z, s3o)));
        cout << ans1 + ans2 << endl;
    }
    return 0;
}