#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;
    multiset<int> v;
    set<int> v1;
    v1.insert(t);
    v1.insert(0);
    v.insert(t);
    for (int i = 0; i<n;i++)
    {
        int x;
        cin >> x;
        auto it = v1.upper_bound(x);
        auto it1 = prev(it);
        int l = *it1;
        int r = *it;

        v.erase(v.find(r - l));
        v.insert(r - x);
        v.insert(x - l);
        v1.insert(x);
        cout << *v.rbegin() << " ";
    }
    cout << endl;
    return 0;
}