#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    long long n = s.size();
    map<char, long long> mp;
    for (long long i = 0; i < n;i++)
    {
        mp[s[i]]++;
    }
    long long odd = 0;
    long long even = 0;
    char oddidx;
    for(auto val:mp)
    {
        if(val.second%2==1)
        {
            odd++;
            oddidx = val.first;
        }
    }
    if(odd>1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for(auto val:mp)
    {
        if(val.second%2==1)
        {
            oddidx = val.first;
        }
    }
    deque<char> ans;
    bool x = true;
    for (long long i = 0; i < mp[oddidx];i++)
    {
        if(x)
        {
            ans.push_back(oddidx);
            x = false;
        }
        else{
            ans.push_front(oddidx);
            x = true;
        }
    }
    x = true;
    for(auto val:mp)
    {
        if(val.first==oddidx)
        {
            continue;
        }
        for (long long i = 0; i < val.second / 2;i++)
        {
            ans.push_back(val.first);
        }
        for (long long i = 0; i < val.second / 2;i++)
        {
            ans.push_front(val.first);
        }
    }
    for(char i:ans)
    {
        cout << i;
    }
    cout << endl;
    return 0;
}