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
        long long trc = 0;
        map<char,long long> mp;
        bool ans = false;
        for (long long i = 0; i < n;i++)
        {
            if(mp[s[i]]>0)
            {
                ans = true;
                trc++;
                break;
            }
            mp[s[i]]++;
            trc++;
        }
        reverse(s.begin(), s.end());
        map<char,long long> mp1;
        bool ans1 = false;
        long long trc1 = 0;
        for (long long i = 0; i < n;i++)
        {
            if(mp1[s[i]]>0)
            {
                ans1 = true;
                trc1++;
                break;
            }
            mp1[s[i]]++;
            trc1++;
        }
        
        if((ans && trc!=n) || (ans1 && trc1!=n))
        {
            cout << "Yes" << endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}