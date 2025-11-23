#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> a;
    vector<int> b(n);
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m;i++)
    {
        cin >> b[i];
    }
    int trc = 0;
    while(trc < m)
    {
        int price = b[trc];
        auto it = a.upper_bound(price);
        if (it == a.begin())
        {
            cout << -1 << endl;
        } 
        else 
        {
            --it;
            cout << *it << endl;
            a.erase(it);
        }
        trc++;
    }
    return 0;
}