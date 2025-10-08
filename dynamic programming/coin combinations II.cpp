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

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= x; j++)
            if (j - coins[i] >= 0)
            {
                dp[j] += dp[j-coins[i]];
                dp[j] %= MOD;
            }

    cout << dp[x];
}
