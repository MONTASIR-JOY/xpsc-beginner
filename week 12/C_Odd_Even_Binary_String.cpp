#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int even = 0;
        int odd = 0;

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]==0)
            {
                even++;
            }
        }
        odd = n - even;
        //cout << odd << " " << even << endl;
        if(even%2!=0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
   
    }
    return 0;
}