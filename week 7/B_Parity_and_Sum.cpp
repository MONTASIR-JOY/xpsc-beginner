#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);
        vector<long long> ev;
        vector<long long> od;

        long long even = 0;
        long long odd = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                ev.push_back(v[i]);
                even++;
            }
            else
            {
                od.push_back(v[i]);
                odd++;
            }
        }

        if (even == n || odd == n)
        {
            cout << 0 << endl;
            continue;
        }

        sort(ev.begin(), ev.end());
        sort(od.begin(), od.end());

        long long x = od[od.size() - 1];
        bool y = false;
        for (long long i = 0; i < ev.size(); i++)
        {
            if (x < ev[i])
            {
                y = true;
                break;
            }
            else
            {
                x += ev[i];
            }
        }
        if(y)
        {
            cout << ev.size() + 1 << endl;
        }
        else
        {
            cout << ev.size() << endl;
        }
    }
    return 0;
}
