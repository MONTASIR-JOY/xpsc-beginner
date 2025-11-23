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
        long long n;
        cin >> n;
        vector<long long> v(n);

        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        long long cnt = 0;
        long long sum = 0;
        bool y = false;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]<0 && y==false)
            {
                cnt++;
                sum += (v[i] * -1);
                y = true;
            }
            else if(v[i]<=0 && y==true)
            {
                sum += (v[i] * -1);
            }
            else{
                y = false;
                sum += v[i];
            }
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}