#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]>0)
            {
                sum += v[i];
            }

        }

        int l = 0;
        int r = 0;
        for (int i = 0; i < n;i++)
        {
            if(v[i]>0)
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0;i--)
        {
            if(v[i]>0)
            {
                r = i;
                break;
            }
        }
        //cout << l << " " << r << endl;
        int neg = 0;
        for (int i = l; i < r; i++)
        {
            if(v[i]<0)
            {
                neg++;
            }
        }

        if(sum>0)
        {
            cout << neg << endl;

        }
        else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}