#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    string s;
    bool ans = true;
    for (int i = 0; i < k; i++)
    {

        cin >> s;
        bool first = false, second = false;
        for (auto ch : s)
        {
            if (ch >= 'a' && ch <= 'm')
            {
                first = true;
            }
            else if (ch >= 'N' && ch <= 'Z')
            {
                second = true;
            }
            else
                ans = false;
        }
        if (first && second)
            ans = false;
    }
    if (ans)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
