#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    int s = 2;
    for (long long i = 2; i <= sqrt(n);i++)   
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    long long k = 0;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n<=3)
        {
            cout << "NO" << endl;
            continue;
        }
        k = sqrt(n);
        if(prime (k) && k*k==n)
        {
            cout << " YES"<<endl;
        }
        else
        {
            cout << " NO" << endl;
        }
    }
    return 0;
}