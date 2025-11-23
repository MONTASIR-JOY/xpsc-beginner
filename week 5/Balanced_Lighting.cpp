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
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        int red = 0;
        int blue = 0;
        int unc = 0;
        for(int i:v)
        {
            if(i==1)
            {
                red++;
            }
            else if(i==2)
            {
                blue++;
            }
            else{
                unc++;
            }
        }
        int x = n / 2;
        if(n%2==1)
        {
            cout << "No" << endl;
            continue;
        }
        else if(red>x || blue>x)
        {
            cout << "No" << endl;
            continue;
        }
        else{
            cout << "Yes" << endl;
            continue;
        }
    }
    return 0;
}