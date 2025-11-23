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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for(char i:s)
        {
            if(i=='1')
            {
                one++;
            }
            else
            {
                zero++; 
            }
        }

        int mn = abs(one - zero) / 2;
        if(mn>k)
        {
            cout << "NO" << endl;
            continue;
        }
        if(mn%2==0)
        {
            if(k%2==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(k%2==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

