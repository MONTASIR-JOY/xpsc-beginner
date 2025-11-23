#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%2==0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            vector<int> v;
            for (int i = 0; i < n;i++)
            {
                v.push_back(i + 1);
            }
            reverse(v.begin(), v.end());

            for(int i:v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
        return 0;
}