#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    if(a%b==0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    //cout << gcd(15, 10) << endl;
    
    while(t--)
    {
        long long n;
        cin >> n;
        long long x = 1;
        while(x<=1)
        {
            long long sum = 0;
            long long copy = n;
            while(copy!=0)
            {
                long long last = copy % 10;
                sum += last;
                copy /= 10;
            }

            x = __gcd(n, sum);
            if(x>1)
            {
                break;
            }
            else{
                n++;
            }
        }
        cout << n << endl;
    }
    return 0;
}