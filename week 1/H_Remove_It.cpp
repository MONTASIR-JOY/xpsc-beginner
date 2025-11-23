#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> v;
    for (long long i = 0; i < n;i++)
    {
        long long a;
        cin >> a;
        if(a!=x)
        {
            v.push_back(a);
        }
    }
    for(long long i:v)
    {
        cout << i << " ";
    }
        return 0;
}