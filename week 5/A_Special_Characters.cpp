#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2==1)
        {
            cout << "NO" << endl;
            continue;
        }
        string ans;
        int cnt = 0;
        int cntr=0;
        bool next = false;
        for (int i = 0; i < n+n/2+1;i++)
        {
            if(next==false)
            {
                ans.push_back('B');
                next = true;
            }
            else{
                ans.push_back('A');
                cnt++;
                cntr++;
                if(cnt==2)
                {
                    cnt = 0;
                    next = false;
                }
            }
            if(cntr==n)
            {
                ans.push_back('B');
                break;
            }
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
    return 0;
}