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
        set<int> s;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        if(s.size()>1)

        {
            cout << 2 << endl;
        }
        else{
            cout <<-1<<endl;
        }      
    }
    return 0;
}