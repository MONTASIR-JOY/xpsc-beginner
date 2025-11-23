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
        string v[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j < n;j++)
            {
                string s;
                cin >> s;
                v[i][j] = s;
                mp[s]++;
            }
        }
        vector<int> point(3,0);
        for (int i = 0;i<3;i++)
        {
            for (int j = 0; j < n;j++)
            {
                if(mp[v[i][j]]==1)
                {
                    point[i] += 3;
                }
                else if(mp[v[i][j]]==2)
                {
                    point[i] += 1;
                }
                else{
                    point[i] += 0;
                }
            }
        }
        cout << point[0] << " " << point[1] << " " << point[2] << endl;
    }
    return 0;
}