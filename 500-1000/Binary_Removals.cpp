#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        long long one = 0;
        long long inv = 0;
        for (long long i = 0; i < n;i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else{
                inv += one;
            }
        }
        if(inv<=x && inv%k==0)
        {
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}