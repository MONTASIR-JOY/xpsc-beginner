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
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        int temp = 0;
        while(temp<n)
        {
            int sz;
            cin >> sz;
            string s;
            cin >> s;
            //cout << sz << " " << s << endl;
            for (int i = 0; i < s. size();i++)
            {
                if(s[i]=='D')
                {
                    if(v[temp]==9)
                    {
                        v[temp] = 0;
                    }
                    else{
                        v[temp]++;
                    }
                }
                else{
                    if(v[temp]==0)
                    {
                        v[temp] = 9;
                    }
                    else{
                        v[temp]--;
                    }
                }
            }
            temp++;
        }
        for(int i:v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}