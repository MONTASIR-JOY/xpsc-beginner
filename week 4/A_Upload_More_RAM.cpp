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
        int n, k;
        cin >> n >> k;

        int sum = 0;
        sum++;
        n--;
        sum += n * k;
        cout << sum << endl;
    }
    return 0;
}