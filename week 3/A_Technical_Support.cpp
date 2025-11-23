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
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < n;i++)
        {
            if (s[i] == 'Q')
            {
                v.push_back('Q');
            }
            else{
                if(v.size()>0)
                {
                    v.pop_back();
                }
                
            }
        }
        if(!v.empty())
        {
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}