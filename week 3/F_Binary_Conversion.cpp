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
        
        long long n, k;
        cin >> n >> k;
        string s;
        string t;
        cin >> s;
        cin >> t;

        long long zeros = 0;
        long long ones = 0;
        for (long long i = 0; i < n;i++)
        {
            if(s[i]=='0')
            {
                zeros++;
            }
            else{
                ones++;
            }
        }
        long long zerot = 0;
        long long onet = 0;
        for (long long i = 0; i < n;i++)
        {
            if(t[i]=='0')
            {
                zerot++;
            }
            else{
                onet++;
            }
        }

        if(zeros!=zerot || ones!=onet)
        {
            cout << "NO" << endl;
            continue;
        }

        long long somossa = 0;
        for (long long i = 0; i < n;i++)
        {
            if(s[i]!=t[i])
            {
                somossa++;
            }
        }
        somossa /= 2;
        bool dupli = ones > 1 || zeros > 1;

        if(k<somossa)
        {
            cout << "NO" << endl;
        }
        else if(dupli || (k-somossa)%2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}