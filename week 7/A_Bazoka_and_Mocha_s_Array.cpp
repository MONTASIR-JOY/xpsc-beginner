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
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        vector<int> ans(n);
        bool x = false;
        for (int i = 0; i < n;i++)
        {
            if(is_sorted(v.begin()+i,v.end()))
            {
                x = true;
                break;
            }
            v.push_back(v[i]);
        }
        if(x)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}