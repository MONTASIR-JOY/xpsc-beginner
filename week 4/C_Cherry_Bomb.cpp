#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    long long ca=1;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<long long> b(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n;i++) 
        {
            cin >> b[i];
        }

    
        long long l = 0;
        for (long long i = 0; i < n;i++)
        {
            if(b[i]!=-1)
            {
                l = i;
                break;
            }
        }

        long long sum = a[l] + b[l];
        //cout << sum << endl;
        bool y = false;
        long long ya = 0;
        for (long long i = 0; i < n;i++)
        {
            if(b[i]!=-1 && a[i]+b[i]!=sum)
            {
                y = true;
            }
           
            if(b[i]==-1)
            {
                ya++;
            }
        }
        if(y)
        {
            cout <<"0" << endl;
            ca++;
            continue;
        }
        
        for (long long i = 0; i < n;i++)
        {
            if(b[i]==-1)
            {
                b[i] = abs(sum - a[i]);
            }
        }
        if(ya!=n)
        {
            bool y = false;

            for (long long i = 0; i < n;i++)
            {
                if(a[i]>sum)
                {
                    y = true;
                } 
            }
            for (long long i = 0; i < n; i++)
            {
                if (b[i] > k)
                {
                    y = true;
                }
            }
            if(y)
            {
                cout << 0 << endl;

            }
            else{
                cout << 1 << endl;
            }
            continue;
        }
        long long mx = LLONG_MIN;
        //long long mn = long long_MAX;

        for (long long i = 0; i < n;i++)
        {
            mx = max(a[i], mx);
            
        }
        long long m = LLONG_MIN;
        for (long long i=0; i < n;i++)
        {
            b[i] = mx - a[i];
            //cout << b[i] << " ";
            m = max(b[i], m);
        }
        cout << k-m+1 << endl;
    }
    
        return 0;
}