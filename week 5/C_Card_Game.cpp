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
        long long n;
        cin >> n;

        string a;
        cin >> a;
        
        if (count(a.begin(), a.end(), 'B') == 0)
        {
            cout << "Alice\n";
            continue;
        }
        if (count(a.begin(), a.end(), 'A') == 0)
        {
            cout << "Bob\n";
            continue;
        }
        if (a[0] == a.back()) 
        {
            if (a[0] == 'A')
                cout << "Alice\n";
            else
                cout << "Bob\n";
            continue;
        }
        if (a[0] == 'B') 
        {
            if (a[n - 2] == 'A') 
            {
                cout << "Alice\n";
            } 
            else 
            {
                cout << "Bob\n";
            }
            continue;
        }
    
        if (count(a.begin(), a.end(), 'B') == 1 && 'B' == a[n - 1]) 
        {
            cout << "Alice\n";
            continue;
        }
        cout << "Bob\n";
    }
    return 0;
}