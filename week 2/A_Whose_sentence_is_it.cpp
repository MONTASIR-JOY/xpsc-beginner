#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        // cout << s << endl;
        string la;
        string im;
        
        bool freda = false;
        bool rainbow = false;
        
        for (int i = s.size() - 5; i < s.size();i++)
        {
            la.push_back(s[i]);
        }

        for (int i = 0; i < 5;i++)
        {
            im.push_back(s[i]);
        }

        if(la=="lala.")
        {
            freda = true;
        }
        if(im=="miao.")
        {
            rainbow = true;
        }
        
        if(rainbow && freda)
        {
            cout << "OMG>.< I don't know!" << endl;
        }
        else if(freda)
        {
            cout << "Freda's" << endl;
        }
        else if(rainbow)
        {
            cout << "Rainbow's" << endl;
        }
        else{
            cout << "OMG>.< I don't know!" << endl;
        }
    }
    return 0;
}