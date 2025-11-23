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
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        if(m<n*a || m>n*b)
        {
            cout << "No" << endl;
            continue;
        }
        if((m-b*n)%(a-b)==0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

    }
    return 0;
}