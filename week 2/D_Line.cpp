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
        cin >> s;

        vector<long long> v;

        long long mx = 0;

        for (long long i = 0; i < n;i++)
        {
            if(s[i]=='L')
            {
                if(i>=n-i-1)
                {
                    mx += i;
                }
                else
                {
                    v.push_back(n - i - 1-i);
                    mx += n - i - 1;
                }
            }
            else 
            {
                if(i>n-i-1)
                {
                    v.push_back(i+i-n+1);
                    mx += i;
                }
                else 
                {
                    mx += n-i-1;
                }
                
            }
        }
        sort(v.begin(), v.end());
        if(v.size()>=1)
        {
            v.pop_back();
        }
        sort(v.begin(), v.end(), greater<int>());

        long long target = mx;
        vector<long long> ans;

        for (long long i = 0; i < n-v.size();i++)
        {
            ans.push_back(mx);
        }
        for (long long i =n- v.size(); i < n;i++)
        {
            target = target - v.back();
            v.pop_back();
            ans.push_back(target);
        }
        sort(ans.begin(), ans.end());
        
        for(long long i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}