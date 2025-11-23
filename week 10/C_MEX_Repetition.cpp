#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> t(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> t[i];
        }
        deque<long long> v;
        for(long long i:t)
        {
            v.push_back(i);
        }
        sort(t.begin(), t.end());
        long long miss=-1;
        for (long long i = 0; i < n;i++)
        {
            if(t[i]!=i)
            {
                miss = i;
                break;
            }
        }
        if(miss==-1)
        {
            miss = n;
        }
      
        v.push_back(miss);
        long long rot = k % (n+1);
        
        for (long long i = 0; i < rot;i++)
        {
            v.push_front(v.back());
            v.pop_back();
        }
        for (long long i = 0; i < n;i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}