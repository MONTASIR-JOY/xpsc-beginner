#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
 {       int n;
            cin >> n;
            vector<int> v(n);
            int mx = 0;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
                if(v[i]>mx)
                {
                    cout << 1 << " ";
                }
                else{
                    cout << 0 << " ";
                }
                mx = max(v[i], mx);
            }
            cout << endl;
        }
  return 0;
}