#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0;
    int l = 0;
    int r = 0;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        if(x%2==0)
        {
            l++;
        }
        else{
            r++;
        }
    }
    if(l>r)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else{
        cout << "NOT READY" << endl;
    }
        return 0;
}