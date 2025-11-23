#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    deque<long long> dq(n);
    long long sereja=0;
    long long dima=0;
    for (int i = 0; i < n;i++)
    {
        cin >> dq[i];
    }
    bool s = false;
    bool d = true;
    while(!dq.empty())
    {
        if(s==false)
        {
            s = true;
            if(dq.front()>dq.back())
            {
                sereja += dq.front();
                dq.pop_front();
            }
            else{
                sereja += dq.back();
                dq.pop_back();
            }
        }
        else{
            s = false;
            if(dq.front()>dq.back())
            {
                dima += dq.front();
                dq.pop_front();
            }
            else{
                dima += dq.back();
                dq.pop_back();
            }
        }
    }
    cout << sereja << " " << dima << endl;

    return 0;
}