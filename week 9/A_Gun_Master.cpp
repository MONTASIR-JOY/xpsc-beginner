#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n, d;
        cin >> n >> d;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        bool sh = true;
        long long cnt = 0;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]>d && sh==true)
            {
                cnt++;
                sh = false;
            }
            else if(v[i]<=d && sh==false)
            {
                cnt++;
                sh = true;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}