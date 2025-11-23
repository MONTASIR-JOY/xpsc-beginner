#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long q;
    cin >> q;
    while(q--)
    {
        long long n;
        cin >> n;
        string s, t;
        cin >> s;
        cin>>t;
        long long l = -1;
        long long r = -1;
        bool f = false;
        bool fa = false;
        long long ones = 0;
        long long onet = 0;
        for (long long i = 0; i  < n;i++)
        {
            if (s[i] == '1' && f==false)
            {
                l = i;
                ones++;
                f = true;
            }
            if (t[i] == '1' && fa==false)
            {
                r = i;
                fa = true;
            }
        }
        // cout << l << " " << r << endl;
        if(s==t)
        {
            cout << 0 << endl;
            continue;
        }
        if(l!=r)
        {
            cout << -1 << endl;
            continue;
        }
        long long cnt = 0;
        vector<long long> ans;

        for (long long i = l; i < n;i++)
        {
            if(s[i]=='0')
            {
                cnt++;
                s[i] = '1';
                ans.push_back(i-1);
            }
        }
        //cout << s << endl;
        for (long long i = n - 1; i >= l;i--)
        {
            if(s[i]!=t[i])
            {
                s[i] = t[i];
                ans.push_back(i - 1);
                cnt++;
            }
        }
        if (cnt <= 3 * n)
        {
            //reverse(ans.begin(), ans.end());
            cout << cnt << endl;
            for (long long i : ans)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
    return 0;
}

