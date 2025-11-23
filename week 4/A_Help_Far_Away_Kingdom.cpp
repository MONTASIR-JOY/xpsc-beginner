#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string in;
    string fl;
    int b;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]=='.')
        {
            b = i;
            break;
        }
        in.push_back(s[i]);
    }

    for (int i = b+1; i < s.size();i++)
    {
        fl.push_back(s[i]);

    }
   //cout << in << " " << fl << endl;

    if(in[in.size()-1]=='9')
    {
        cout << "GOTO Vasilisa." << endl;
        return 0;
    }
    string s5;
    s5.push_back(fl[0]);
    int a = stoi(s5);
    if(a>=5)
    {
        in.back() += 1;
        cout << in << endl;
        return 0;
    }
    else{
        cout << in << endl;
        return 0;
    }
    return 0;
}