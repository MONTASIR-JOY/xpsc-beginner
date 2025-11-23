#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n%3==0)
        {
            cout << 3 <<endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}