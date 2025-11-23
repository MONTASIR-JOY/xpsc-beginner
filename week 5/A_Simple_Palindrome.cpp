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
        string s = "aeiou";
        string ans;
        int point = 0;
        for (int i = 0; i < n;i++)
        {
            if(point==5)
            {
                point = 0;
            }
            ans.push_back(s[point]);
            point++;
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}