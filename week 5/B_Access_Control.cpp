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
        int n,x;
        cin >> n>>x;
        string s;
        cin >> s;
        int l = 0;
        int r = 0;
        bool ans = true;
        
        int rem = 0;
        while(r<n)
        {
            if(s[r]=='0')
            {
                
                if(rem<=0)
                {
                    ans = false;
                    break;
                }
                rem--;
            }
            else
            {
                rem = x;
            }
            r++;
        }
        if(ans)   
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