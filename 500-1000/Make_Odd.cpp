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
        string a;
        string b;
        cin >> a;
        cin >> b;
        int sum = 0;
        for (int i = 0; i < n;i++)
        {
            if(a[i]=='1' && b[i]=='1')
            {
                sum++;
            }
        }
        if(sum%2==1)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < n;i++)
        {
            if(a[i]!=b[i] && sum%2==0)
            {
                sum++;
            }
        }
        if(sum%2==1)
        {
            cout << "YES" << endl;
         
            continue;
        }
        cout << "NO" << endl;
   
    }
    return 0;
}