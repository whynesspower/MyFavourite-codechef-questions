#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n, k, s;
        cin  >> n >> k >> s;
        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        vector<ll> go(n + 2), ans(n + 2);
        for (ll i = 1; i <= n + 1; i++) {
            go[i] = upper_bound(a.begin(), a.end(), a[i - 1] + s) - a.begin();
            ans[i] = i;
        }
        for (ll bit = 0; bit < 20; bit++) {
            if ((k >> bit) & 1ll) {
                for (ll i = 1; i <= n + 1; i++) {
                    ans[i] = go[ans[i]];
                }
            }
            for (ll i = 1; i <= n + 1; i++) {
                go[i] = go[go[i]];
            }
        }
        ll maxx = 0;
        for (ll i = 1; i <= n; i++) {
            maxx = max(maxx, ans[i] - i);
        }
        cout << maxx << '\n';
    }

    return 0;
}