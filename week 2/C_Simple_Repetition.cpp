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
        long long a, b;
        cin >> a >> b;
        long long prime = 1;

        if(a==1 && b==1)
        {
            cout << "NO" << endl;
            continue;
        }
        if(a==1 && b==2)
        {
            cout << "YES" << endl;
            continue;
        }

        long long c = sqrt(a);
        long long ans = 0;
        
        for (long long i = 2; i <= c;i++)
        {
            if(a%i==0)
            {
                prime = 0;
                break;
            }
        }
        
        if(prime==0 || b>=2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}