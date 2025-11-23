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
        string chef;
        string chefina;
        cin >> chef;
        cin >> chefina;

        int c = 0;
        int cf = 0;

        for (int i = 0; i < n;i++)
        {
            if(chef[i]==chefina[i])
            {
                continue;
            }
            if(chef[i]=='R' && chefina[i]=='S')
            {
                c++;
            }
            if(chef[i]=='R' && chefina[i]=='P')
            {
                cf++;
            }
            if(chef[i]=='P' && chefina[i]=='R')
            {
                c++;
            }
            if(chef[i]=='P' && chefina[i]=='S')
            {
                cf++;
            }
            if(chef[i]=='S' && chefina[i]=='P')
            {
                c++;
            }
            if(chef[i]=='S' && chefina[i]=='R')
            {
                cf++;
            }
            //cout << i << " " << c << " " << cf << endl;
        }
        if(c>cf)
        {
            cout << "0" << endl;
        }
        else if(c==cf)
        {
            cout << "1" << endl;
        }
        else{
            cout << (cf-c)/2+1 << endl;
        }
        //cout << c << " " << cf << endl;
    }
    return 0;
}