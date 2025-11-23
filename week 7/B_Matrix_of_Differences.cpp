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
        vector<vector<int>> a(n, vector<int>(n));
        int mx = n * n;
        int mn = 1;

        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                for(int j = 0; j < n; j++)
                {
                    if(j % 2 == 0)
                    {
                        a[i][j] = mx--;
                    }
                    else
                    {
                        a[i][j] = mn++;
                    }
                }
            }
            else
            {
                for(int j = n - 1; j >= 0; j--)
                {
                    if(j % 2 == 1)
                    {
                        a[i][j] = mx--;
                    }
                    else
                    {
                        a[i][j] = mn++;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}