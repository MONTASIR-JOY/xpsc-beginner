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
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        if(v[0]==v[n-1])
        {
            bool x = false;
            int cnt = 0;
            for (int i = 0; i < n;i++)
            {
                if(v[i]==v[0])
                {
                    cnt++;
                }
                if(cnt>=k)
                {
                    x = true;
                    break;
                }
            }
            if(x)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else{
            int l = -1;
            int r = -1;
            int cnt = 0;
            int cntr = 0;
            for (int i = 0; i < n;i++)
            {
                if(v[i]==v[0])
                {
                    cnt++;
                }
                if(cnt>=k)
                {
                    l = i + 1;
                    break;
                }
            }
            for (int i = n - 1; i >= 0;i--)
            {
                if(v[i]==v[n-1])
                {
                    cntr++;
                }
                if(cntr>=k)
                {
                    r = i+1;
                    break;
                }
            }
            // cout << l << " " << r << endl;
            if(l<=r && l!=-1 && r!=-1)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}