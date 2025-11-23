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
        int w;
        cin >> n >> w;
        multiset<int> ms;

        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }

        int height = 1;
        int space = w;
        while(!ms.empty())
        {
            auto it = ms.upper_bound(space);

            if(it==ms.begin())
            {
                height++;
                space = w;
                continue;
            }
            it--;
            if(*it<=space)
            {
                space -= *it;
                ms.erase(it);
            }
        }
        cout << height << endl;
    }
    return 0;
}