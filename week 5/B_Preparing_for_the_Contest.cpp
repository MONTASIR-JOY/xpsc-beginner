#include<bits/stdc++.h>
using namespace std;
void fun(int i)
{
    if(i==0)
    {
        return;
    }
    
    cout << i << " ";
    fun(i - 1);
}
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
        int left = n - k;
        for (int i = n - k; i <= n;i++)
        {
            cout << i << " ";
        }
        fun(n - k-1);
        cout << endl;
    }
    return 0;
}