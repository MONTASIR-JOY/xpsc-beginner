#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double mx = v[0];
    for (int i = 1; i < n;i++)
    {
        double d = v[i] - v[i - 1];
        mx = max(mx, d);
    }
    mx = mx / 2;
    mx = max({double(v[0]), double(k - v[n - 1]), mx});
    cout << setprecision(10) <<fixed<< mx << endl;
    return 0;
}