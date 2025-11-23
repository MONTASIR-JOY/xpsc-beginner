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
        int a[3];
        for (int i = 0; i < 3;i++)
        {
            cin >> a[i];
        }

        sort(a, a + 3);

        bool y = true;
        if(a[0]%2==1 && a[1]%2==1)
        {
            y = false;
        }
        if(y)
        {
            cout << a[0] + a[1] << endl;
        }
        else
        {
            cout << a[0] + a[1] - 1 << endl;
        }
    }
    return 0;
}