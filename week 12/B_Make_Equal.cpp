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
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sum /= n;
        int s = 0;
        bool ans = true;
        for (int i = 0; i < n;i++)
        {
            s += v[i];
            if(s<sum*(i+1))
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}