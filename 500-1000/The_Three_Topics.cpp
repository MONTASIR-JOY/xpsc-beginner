#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[3];
    for (int i = 0; i < 3;i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < 3;i++)
    {
        if(a[i]==x)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}