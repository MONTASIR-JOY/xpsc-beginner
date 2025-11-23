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
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        bool found = false;
        for (long long i = 0; i < n;i++)
        {
            if (v[i] % 3 == 0)
            {
                found = true;
                break;
            }
        }
        for (long long i = 0; i < n;i++)
        {
            for (long long j = i + 1; j < n;j++)
            {
                if ((v[i] + v[j]) % 3 == 0)
                {
                    found = true;
                    break;
                }
            }
        }
        for (long long i = 0; i < n;i++)
        {
            for (long long j = i + 1; j < n;j++)
            {
                for (long long k = j + 1; k < n; k++)
                {
                    if ((v[i] + v[j] + v[k])%3==0)
                    {
                        found = true;
                        break;
                    }
                }
            }
        }
        if(found)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}