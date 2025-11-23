#include<bits/stdc++.h>
using namespace std;

void solve(string s, int n) 
{
    if (n == 2 && s == "()")
    {
        cout << "NO" << endl;
        return;
    }

    string ans;

    for (int i = 0; i < n; ++i)
    {
        ans += "(";
    }

    for (int i = 0; i < n; ++i)
    {
        ans += ")";
    }

    if (ans.find(s) != -1)
    {
        ans.clear();

        for (int i = 0; i < n; ++i) 
        {
            ans += "()";
        }

        cout << "YES" << endl;
        cout << ans << endl;
    }
    else 
    {
        cout << "YES" << endl;
        cout << ans << endl;
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        solve(s, n);
    }

    return 0;
}