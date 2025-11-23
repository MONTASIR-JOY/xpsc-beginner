#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    if(n==0 || n==1)
    {
        return false;
    }
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

    long long n;
    cin >> n;
    if(n==0 || n==1)
    {
        cout << -1 << endl;
    }
    else if(prime(n-2))
    {
        cout << 2 << " " << n - 2 << endl;
    }
    else if(prime(n-3) && n>=3)
    {
        cout << 3 << " " << n - 3 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}