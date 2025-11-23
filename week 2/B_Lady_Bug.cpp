#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s, s1;
        cin >> s;
        cin >> s1;

        int numberOfOddFreeCellInB = 0;
        int numberOfEvenPosOneInA = 0;
        int numberOfEvenFreeCellInB = 0;
        int numberOfOddPosOneInA = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1' && i%2==0)
            {
                numberOfEvenPosOneInA++;
            }
            if(s[i]=='1' && i%2==1)
            {
                numberOfOddPosOneInA++;
            }
            if(s1[i]=='0' && i%2==1)
            {
                numberOfOddFreeCellInB++;
            }
            if(s1[i]=='0' && i%2==0)
            {
                numberOfEvenFreeCellInB++;
            }
        }
         if (numberOfOddFreeCellInB >= numberOfEvenPosOneInA && numberOfEvenFreeCellInB >= numberOfOddPosOneInA)
          {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
