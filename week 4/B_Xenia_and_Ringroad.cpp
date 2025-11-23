 #include<bits/stdc++.h>
 using namespace std;
int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     long long n, m;
     cin >> n >> m;
     vector<long long>v(m);
     for (long long i = 0; i < m;i++)
     {
         cin >> v[i];
     }
     long long sec = v[0]-1;

     for (long long i = 1; i < m;i++)
     {
        if(v[i-1]<=v[i])
        {
            sec += v[i] - v[i - 1];
        }
        else{
            sec += n - v[i - 1] + v[i];
        }
     }
     cout << sec << endl;
     return 0;
 }