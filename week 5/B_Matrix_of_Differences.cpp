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
        vector<int> v;
        int p = 1;
        for (int i = 1; i <= n * n;i++)
        {
            if(i%2==1)
            {
                cout << n*n << " ";
            }
            else
            {
                cout << n * n - p << " ";
                p++;
            }
            if(i%n==0)
            {
                cout  << endl;
            }

        }
    }
    return 0;
}