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
        long long r, g, b, w;
        cin >> r >> g >> b >> w;
        int odd = 0;
        int even = 0;
        if(w%2==1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        if(r%2==1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        if(g%2==1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        if(b%2==1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        long long mn = min({r, g, b});
        if(mn==0)
        {
            if(odd>1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            if(odd==3 || odd==0 || odd==1 || even==0)
            {
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}