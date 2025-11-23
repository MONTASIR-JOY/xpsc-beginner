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
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        int i = 0;
        int j = n-1;
        int k=0;
        while(i<=j)
        {
            if(k%2==0)
            {
                cout << v[i] << " ";
                i++;
            }
            else{
                cout << v[j] << " ";
                j--;
            }
            k++;
        }
        cout << endl;
    }
    return 0;
}