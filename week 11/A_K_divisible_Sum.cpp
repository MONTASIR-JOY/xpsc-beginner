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
        if(k<n)
        {
            int mul = n / k;
            if(n%k!=0)
            {
                mul++;
            }
            k *= mul;
        }
        int div = k / n;
        if(k%n!=0)
        {
            div++;
        }
        cout << div << endl;
    }
    return 0;
}