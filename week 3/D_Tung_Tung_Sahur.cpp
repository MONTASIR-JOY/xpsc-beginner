#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        if(a.size()>b.size())
        {
            cout << "NO" << endl;
            continue;
        }
        int remr = 0;
        int reml = 0;
        bool ans = true;
        while(!a.empty())
        {
            if(a.back()=='R')
            {
                a.pop_back();
                bool y = false;
                reml = 0;
                if(b.back()=='R' && !b.empty())
                {
                    b.pop_back();
                    y = true;
                }
                if(b.back()=='R' && y==true && !b.empty())
                {
                    b.pop_back();
                    remr++;
                }
                if(y==false && remr>0)
                {
                    y = true;
                    remr--;
                }
                if(y==false)
                {
                    ans = false;
                }
            }
            else
            {
                a.pop_back();
                remr = 0;
                bool y = false;
                if(b.back()=='L' && !b.empty())
                {
                    b.pop_back();
                    y = true;
                }
                if(b.back()=='L' && y==true && !b.empty())
                {
                    b.pop_back();
                    reml++;
                }
                if(y==false && reml>0)
                {
                    y = true;
                    reml--;
                }
                if(y==false)
                {
                    ans = false;
                }    
            }
        }
        if(ans && a.size()==0 && b.size()==0)
        {
            cout << "YES" << endl;
           // cout << a.size() << " " << b.size() << endl;
        }
        else{
            cout << "NO" << endl;
           // cout << a.size() << " " << b.size() << endl;
        }
    }
    return 0;
}