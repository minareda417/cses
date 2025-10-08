#include <bits/stdc++.h>

using namespace std;

#define fast_io     ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>
#define MOD static_cast<ll>(1e9+7)


int main()
{
    fast_io;
    int n, x;
    cin >> n >> x;

    vector<ll> coins(n);
    for (auto& it: coins)
        cin >> it;

    vector<ll> dp(x+1, 0);
    dp[0] = 1;

    for (int i = 0; i <= x; i++)
    {
        ll z = dp[i];
        if (z == 0) continue;
        for (ll c: coins)
            if (i+c <= x)
                dp[i+c] = (dp[i+c]%MOD + z%MOD)%MOD;
    }

    cout << dp[x];
}
