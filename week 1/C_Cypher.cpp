#include<bits/stdc++.h>
using namespace std;
int main()
{
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

        for (int i = 0; i < n;i++)
        {
            int b;
            cin >> b;
            string s;
            cin >> s;
            // cout << s << endl;
            
            for (int j = 0; j < b;j++)
            {
                if(s[j]=='D')
                {
                    if(a[i]== 9 && s[j]=='D')
                    {
                        a[i] = 0;
                        //cout << a[i] << endl;
                    }
                    else if(s[j]=='D')
                    {
                        a[i]++;
                    }
                }
                if(s[j]=='U')
                {
                    if(a[i]== 0 && s[j]=='U')
                    {
                        a[i] = 9;
                        //cout << a[i] << endl;
                    }
                    else if(s[j]=='U')
                    {
                        a[i]--;
                    }
                }
            }
            // cout << a[i] << endl;
        }
        for (int i = 0; i < n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}