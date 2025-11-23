#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>v(n);
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        if(v[i]==1)
        {
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    if(cnt2>0)
    {
        cout << 2 << " ";
        cnt2--;
    }
    if(cnt1>0)
    {
        cnt1--;
        cout << 1 << " ";
    }
    for (int i = 0; i < cnt2;i++)
    {
        cout << 2 << " ";
    }
    for (int i = 0; i < cnt1;i++)
    {
        cout << 1 << " ";
    }
    cout << endl;
    return 0;
}