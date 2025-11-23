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
        vector<float> v(5);
        float sum = 0;
        for (long long i = 0; i < 5;i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        float avg = sum / 5;
        if(avg>=7)
        {
            cout << 0 << endl;
            continue;
        }
        long long gold = 0;
        for (long long i = 0; i < 5;i++)
        {
            if((sum/5)>=7)
            {
                break;
            }
            sum += (10 - v[i]);
            gold += 100;
        }
        cout << gold << endl;
    }
    return 0;
}