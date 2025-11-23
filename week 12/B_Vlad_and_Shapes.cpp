#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        bool x = true;
        int cnt = 0;
        int temp=0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            for (int j = 0; j < n;j++)
            {
                if(i==0)
                {
                    if(v[i][j]=='1')
                    {
                        cnt++;
                    }
                    continue;
                }
                if(v[i][j]=='1')
                {
                    cnt++;
                }
            }
            //cout << cnt << " " << temp << endl;

            if(i==0)
            {
                if(cnt>0)
                {
                    temp = cnt;
                }
                cnt = 0;
                continue;
            }
            if(cnt==0)
            {
                continue;
            }
            if(temp==0)
            {
                temp = cnt;
            }
            //cout << cnt << " " << temp << endl;
            if(cnt!=temp)
            {
                x = false;
            }
            
            cnt = 0;
        }
        if(x)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }
    return 0;
}