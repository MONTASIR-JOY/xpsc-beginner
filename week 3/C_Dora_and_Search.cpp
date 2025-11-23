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
        vector<int> v;
        set<int> s;
        int l = 0;
        int r = n - 1;
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }
        bool flag = false;
        while (l < r)
        {
            int mn = *s.begin();
            int mx = *(--s.end());

            if(v[l]!=mn && v[l]!=mx && v[r]!=mn && v[r]!=mx)
            {
                cout << l+1 << " " << r+1 << endl;
                flag = true;
                break;
            }
            else if(v[l]==mn || v[l]==mx)
            {
                s.erase(v[l]);
                l++;
            }
            else if(v[r]==mn || v[r]==mx)
            {
                s.erase(v[r]);
                r--;
            }
            
        }
        if(flag==false)
        {
            cout << -1 << endl;
        }

    }
    return 0;
}