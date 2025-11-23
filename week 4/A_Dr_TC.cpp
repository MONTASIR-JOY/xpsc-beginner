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
        string s;
        cin >> s;
        string dup = s;
        int sum = 0;
        for (int i = 0; i < n;i++)
        {
            dup = s;

            if(dup[i]=='1')
            {
                dup[i] = '0';
            }
            else if(dup[i]=='0')
            {
                dup[i] = '1';
            }

            for (int i = 0; i < n;i++)
            {
                if(dup[i]=='1')
                {
                    sum++;
                }
            }

        }
        cout << sum << endl;
    }
    return 0;
}