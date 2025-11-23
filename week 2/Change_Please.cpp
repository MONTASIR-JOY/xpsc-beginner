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
        long long n;
        cin >> n;
       
        if(n%10>0)
        {
            n = n / 10;
            cout << 100 - 10 * n -10<< endl;
        }
        else 
        {
            n = n / 10;
            cout << 100 - 10 * n << endl;
        }
     
    }
    return 0;
}