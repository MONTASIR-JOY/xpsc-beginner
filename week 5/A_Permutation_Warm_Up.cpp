#include<bits/stdc++.h>
using namespace std;
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
        int sum = 0;

        for (int i = n%2; i <= n;i+=2)
        {
            sum += i;
        }
        if(n%2==0)
        {
            sum++;
        }
        cout << sum -n/2  << endl;
    }

    return 0;
}