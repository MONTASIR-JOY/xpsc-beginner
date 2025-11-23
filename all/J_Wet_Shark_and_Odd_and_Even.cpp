#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    vector<long long> oddve;
    long long even = 0;
    long long evensum = 0;
    long long odd = 0;
    long long oddsum = 0;
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
        if(v[i]%2==0)
        {
            even++;
            evensum += v[i];
        }
        else{
            odd++;
            oddve.push_back(v[i]);
        }
    }
    if(odd%2==0)
    {
        odd++;
    }
    sort(oddve.rbegin(),oddve.rend());
    for (long long i = 0; i < odd - 1;i++)
    {
        oddsum += oddve[i];
    }
    cout << evensum + oddsum << endl;
    return 0;
}