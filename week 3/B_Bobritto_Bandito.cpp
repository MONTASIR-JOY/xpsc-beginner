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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long l = 0;
        long long r=0;
        for (int i = 0; i < b;i++)
        {
            if(r<d)
            {
                r++;
            }
            else if(l>c)
            {
                l--;
            }
        }
        cout << l << " " << r << endl;
    }
    return 0;
}