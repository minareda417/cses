#include <bits/stdc++.h>

using namespace std;

#define fast_io     ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define MOD static_cast<ll>(1e9+7)

int main()
{
    fast_io;
    ll n, x;
    cin >> n >> x;
    vll h(n), s(n);
    for (auto& it: h)
        cin >> it;
    for (auto& it: s)
        cin >> it;
    vll dp(x+1, 0);

    for (ll i = 1; i <= n; i++)
        for (ll j = x; j >= h[i-1]; j--)
            dp[j] = max(dp[j], dp[j - h[i-1]] + s[i-1]);

    cout << dp[x];
    return 0;
}