#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
        int odd = 0;
 
        int a[100000]={0};
        for (int i = 0; i < n;i++)
        {
            a[s[i]]++;
        }
        for (int i = 0; i < 100000;i++)
        {
            if(a[i]%2!=0)
            {
                odd++;
            }
        }
 
        if(odd>k+1)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}