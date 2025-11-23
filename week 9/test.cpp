#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> divisors;
    for (int i = 1; i < sqrt(n);i++)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for(int i:divisors)
    {
        cout << i << " ";
    }
    return 0;
}