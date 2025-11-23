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
        bool x = true;
        int i = 0;
        int j = s.size()-1;
        while(i<j)
        {
            if(abs(s[i]-s[j])!=2 && abs(s[i]-s[j])!=0)
            {
                x = false;
                break;
            }
            i++;
            j--;
        }
        if(x)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}