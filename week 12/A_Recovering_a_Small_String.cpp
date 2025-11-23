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
        if(n>=53)
        {
            cout << (char)(n - 53 + 'a');
            cout << "zz" << endl;
        }
        else if(n>27)
        {
            deque<char> dq;
            dq.push_back('z');
            n -= 26;
            cout << 'a';
            n -= 1;
            cout << (char)(n-1+'a');
            cout << 'z' << endl;
        }
        else{
            cout << "aa";
            cout << (char)(n - 3 + 'a') << endl;
        }
    }
    return 0;
}