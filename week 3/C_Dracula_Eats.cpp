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
        long long a;
        cin >> a;
        if(a<2)
        {
            cout << "0" << endl;
        }
        else{
            a--;
            a--;
            cout << a / 7 + 1 << endl;
        }
    }
    return 0;

}