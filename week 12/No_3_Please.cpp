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
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool x = false;
        for (long long i = 0; i < n; i++)
        {
            bool y = true;
            long long sum = 0;

            for (long long j = 0; j < i + 1; j++)
            {
                sum = (sum + v[i - j]) % 3;
                if (sum == 0)
                {
                    y = false;
                    break;
                }
            }
            if (y)
            {
                for (long long j = i + 1; j < n; j++)
                {
                    sum = (sum + v[j]) % 3;
                    if (sum == 0)
                    {
                        y = false;
                        break;
                    }
                }
            }
            if (y)
            {
                x = true;
                break;
            }
        }
        if(x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}