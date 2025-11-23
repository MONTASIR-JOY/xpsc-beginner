#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long sum = 0;
    for (long long i = 0; i < 2;i++)
    {

    
        if (a >= b)
        {
            sum += a;
            a--;
        }
        else if (a < b)
        {
            sum += b;
            b--;
        }
    }
    cout << sum << endl;
    return 0;
}