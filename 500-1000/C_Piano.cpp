#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, b;
    cin >> w >> b;

    string s1 = "wbwbwwbwbwbw";
    string s = s1;
    long long repeat = max(w, b);
    for (long long i = 0; i <= repeat;i++)
    {
        s += s1;
    }
    long long n = s.size();
    long long l = 0;
    long long r = 0;
    long long cw = 0;
    long long cb = 0;
    bool ans = false;

    while(r<n)
    {
        if(s[r]=='w')
        {
            cw++;
        }
        else{
            cb++;
        }

        if(cw==w && cb==b)
        {
            ans = true;
            break;
        }
        else if(cb>b)
        {
            while(cb!=b && l<=r)
            {
                if(s[l]=='w')
                {
                    cw--;
                }
                else{
                    cb--;
                }
                l++;
            }
            if(cw==w &&cb==b)
            {
                ans = true;
                break;
            }
        }
        else if(cw>w)
        {
            while(cw!=w && l<=r)
            {
                if(s[l]=='w')
                {
                    cw--;
                }
                else{
                    cb--;
                }
                l++;
            }
            if(cw==w &&cb==b)
            {
                ans = true;
                break;
            }
        }
        r++;
    }
    if(ans)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}