#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    long long ans = sum;
    for(long long i:v)
    {
        if(sum%2==0)
        {
            ans = sum;
            break;
        }
        else
        {
            if(i%2!=0)
            {
               sum -= i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}