#include <bits/stdc++.h>
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

        vector<long long> a(n);

        for (long long i = 0;i < n;i++) 
        {
            cin >> a[i];
        }

        string s;
        cin >> s;

        vector<long long> pref(n + 1);

        for (long long i = 1;i <= n;i++) 
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        long long l = 1, r = n;
        long long ans = 0;

        while (l < r) 
        {
            if (s[l - 1] == 'L' && s[r - 1] == 'R') 
            {
                ans += pref[r] - pref[l - 1];
                l++, r--;
            }

            else if (s[l - 1] != 'L')
            {
                l++;
            }

            else if (s[r - 1] != 'R')
            {
                r--;
            }
        }

        cout << ans << endl;
   }
   return 0;
}