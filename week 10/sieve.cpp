#include<bits/stdc++.h>
using namespace std;
vector<bool> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i < n + 1;i++)
    {
        if(prime[i]==true)
        {
            for (int j = i * i; j <= n;j+=i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> v = sieve(n);
    for (int i = 0; i < n;i++)
    {
        if(v[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}