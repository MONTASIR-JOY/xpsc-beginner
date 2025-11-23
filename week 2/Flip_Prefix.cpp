#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        if(n==1)
        {
            cout << "1" << endl;
            continue;
        }
        if(n==2)
        {
            long long zero = 0;
            long long one = 0;
            for (long long i = 0; i < n;i++)
            {
                if(s[i]=='0')
                {
                    zero++;
                }
                else{
                    one++;
                }
            }
            if(one==zero)
            {
                cout << "2" << endl;
            }
            else{
                cout << "1" << endl;
            }
            continue;
        }
        long long ans = 1;
        bool is = false;
        for (long long i = 2; i < s.size()+1;i+=2)
        {
            long long zero = 0;
            long long one = 0;
            for (long long j = 0; j < i;j++)
            {
                if(s[j]=='0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }
            if(one==zero)
            {
                //cout << i << " ";
                ans *= 2;
                is = true;
            }
        }
        cout << ans << endl;
    }
        return 0;
}