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
        int two = 0;

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]==2)
            {
                two++;
            }
        }
        int one = n - two;
        if(one%2==1)
        {
            cout << two << endl;
            continue;
        }
        else{
            one /= 2;
            cout << min(one, two) << endl;
            continue;
        }
    }
    return 0;
}