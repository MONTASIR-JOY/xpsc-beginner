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
        set<int> s;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        sort(v.begin(), v.end()-1);
        
        cout << v[n-1]+v[n-2] << endl;
    }
    return 0;
}