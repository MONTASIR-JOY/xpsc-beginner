#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long n;
    cin>>n;
    string conv = "";
    bool che = true;
    while(n!=0)
    {
        if(n%10==4)
        {
            conv.push_back('0');
        }
        else if(n%10==7)
        {
            conv.push_back('1');
        }
        else{
            che = false;
            break;
        }
        n /= 10;
    }
    if(!che)
    {
        cout << "NOT POSSIBLE" << endl;
        return 0;
    }
    
    //reverse(conv.begin(), conv.end());
    //cout << conv << endl;
    long long idx = 0;
    for (long long i = 0; i < conv.size();i++)
    {
         if(conv[i]=='1')
         {
             idx = idx+ pow(2, i);
             //cout << idx << endl;
         }
    }
    for (long long i = 1; i < conv.size();i++)
    {
        idx = idx + pow(2, i);
    }
    cout << idx + 1<< endl;
    return 0;
}