#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;

        if(a==c && b==d)
        {
            cout << "=" << endl;
            continue;
        }

        while(a<=1000000)
        {
            if(b==0)
            {
                break;
            }
            a *= 10;
            b--;
        }
        while(c<=1000000)
        {
            if(d==0)
            {
                break;
            }
            c *= 10;
            d--;
        }

        if(b>d)
        {
            cout << ">" << endl;
        }
        else if(b<d)
        {
            cout << "<" << endl;
        }
        else{
            if(a>c)
            {
                cout << ">" << endl;
            }
            else if(a<c)
            {
                cout << "<" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
    }
    return 0;
}