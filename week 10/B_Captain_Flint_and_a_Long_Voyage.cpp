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
        string s;
        for (long long i = 0; i < n;i++)
        {
            s.push_back('9');
        }
        reverse(s.begin(), s.end());
        long long num = (n + 4 - 1) / 4;
        for (long long i = 0; i < num;i++)
        {
            s[i] = '8';
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}