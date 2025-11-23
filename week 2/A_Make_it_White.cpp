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
        string s;
        cin >> s;
        int right = -1;
        int left = -1;

        left = s.find('B');
        right = s.rfind('B');

        cout << right - left +1 << endl;
    }
    return 0;
}