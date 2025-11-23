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
        long long odd = 0;
        long long even = 0;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            if(i%2==0)
            {
                odd += x;
            }
            else{
                even += x;
            }
        }
        cout << max(odd, even) << endl;
    }
        return 0;
}