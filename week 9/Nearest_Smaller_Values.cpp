#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    stack<pair<int,int>> st;

    for (int i = 0; i < n; i++)
    {
        while(st.size()>0 && st.top().first>=v[i])
        {
            st.pop();
        }
        if(st.size()>0)
        {
            cout << st.top().second << " ";
        }
        else
        {
            cout << 0 << " ";
        }
        st.push({v[i], i + 1});
    }
    return 0;
}