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
        int q;
        cin >> n;
        cin >> q;
        int ms = pow(2, n) * pow(2, n);
        cout << ms << endl;
        int mat[ms][ms];
        while (q--)
        {
            char c, d;
            cin >> c >> d;
            if(c=='<')
            {
                int num;
                cin >> num;
                cout << num << endl;
            }
            else{
                int a, b;
                cin >> a >> b;
                cout << mat[a][b] << endl;
            }
        }
    }
    return 0;
}