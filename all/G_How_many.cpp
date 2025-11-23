#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a+1;i++)
    {
        for (int j = 0; j < a+1;j++)
        {
            for (int k = 0; k < a-(i+j)+1;k++)
            {
                if(i+j+k<=a && i*j*k<=b)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}