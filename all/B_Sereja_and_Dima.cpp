#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0, d = 0;
    int turn = 0; // 0 for Sereja, 1 for Dima

    while (!v.empty())
    {
        int l = v.front();
        int r = v.back();
        int pick;
        if (l >= r) {
            pick = l;
            v.pop_front();
        } else {
            pick = r;
            v.pop_back();
        }
        if (turn == 0)
            s += pick;
        else
            d += pick;
        turn ^= 1; // switch turn
    }
    cout << s << " " << d << endl;
    return 0;
}