#include<bits/stdc++.h>
using namespace std;

int kth_bit_on(int n,int k)
{
    return ((1 << k) | n);
}
int kth_bit_off(int n,int k)
{
    return (~(1 << k) & n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn=INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }

        for (int i = 0; i < n;i++)
        {
            for (int k = 0; k <= __lg(mx);k++)
            {
                if((v[i]>>k)&1)
                {
                    mx = kth_bit_on(mx, k);
                }
                else
                {
                    mn = kth_bit_off(mn, k);
                }
            }
        }
        cout << mx - mn << endl;
    }
    return 0;
}