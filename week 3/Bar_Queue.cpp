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
        int boy = 0;
        int girl = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n;i++)
        {
            if(boy>girl*2)
            {
                break;
            }

            if(s[i]=='G')
            {
                girl++;
            }
            else{
                boy++;
            }
        }
        cout << girl + boy << endl;
    }
    return 0;
}