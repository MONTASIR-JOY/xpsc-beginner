#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> one(n + 1);
        vector<int> two(n + 1);
        vector<int> three(n + 1);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                one[i] = one[i - 1] + 1;
            }

            else
            {

                one[i] = one[i - 1];
            }
            ////

            if (x == 2)
            {
                two[i] = two[i - 1] + 1;
            }

            else
            {

                two[i] = two[i - 1];
            }

            ////

            if (x == 3)
            {
                three[i] = three[i - 1] + 1;
            }

            else
            {

                three[i] = three[i - 1];
            }
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            int range = (r - l) + 1;

            if (range % 2 == 1)
            {

                cout << "No" << endl;
                continue;
            }

            else
            {

                int one_count = one[r] - one[l - 1];
                int two_count = two[r] - two[l - 1];
                int three_count = three[r] - three[l - 1];

                int half = range / 2;

                if (one_count > half || two_count > half || three_count > half)
                {

                    cout << "No" << endl;
                }

                else
                {
                    cout << "Yes" << endl;
                }
            }
        }
    }

    return 0;
}

void arnabsahawrk()
{
    ll n, q;
    cin >> n >> q;

    ll mx = 200005;
    vll arr(mx), prefixOne(mx), prefixTwo(mx), prefixThree(mx);

    rep(i, 1, n + 1)
    {
        cin >> arr[i];

        prefixOne[i] = prefixOne[i - 1] + (arr[i] == 1);
        prefixTwo[i] = prefixTwo[i - 1] + (arr[i] == 2);
        prefixThree[i] = prefixThree[i - 1] + (arr[i] == 3);
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll len = r - l + 1;

        if (len & 1)
            cout << "No" << endl;
        else
        {
            ll cnt1 = prefixOne[r] - prefixOne[l - 1];
            ll cnt2 = prefixTwo[r] - prefixTwo[l - 1];
            ll cnt3 = prefixThree[r] - prefixThree[l - 1];

            ll half = len / 2;

            if (cnt1 > half || cnt2 > half || cnt3 > half)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
}