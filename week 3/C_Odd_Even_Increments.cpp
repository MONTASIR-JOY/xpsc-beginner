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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int odd, even;
        if(a[0]%2==0)
        {
            odd = 0;
        }
        else{
            odd = 1;
        }
        if(a[1]%2==0)
        {
            even = 0;
        }
        else
        {
            even= 1;
        }

        bool ans = true;

        for (int i = 2; i < n;i++)
        {
            if(i%2==0)
            {
                if(a[i]%2!=odd)
                {
                    ans = false;
                }
            }
            else{
                if(a[i]%2!=even)
                {
                    ans = false;
                }
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}