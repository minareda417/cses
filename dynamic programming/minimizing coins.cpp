#include <bits/stdc++.h>

using namespace std;

#define fast_io     ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>


int main()
{
    fast_io;
    ll n, x;
    cin >> n >> x;
    vll coins(n);

    for (auto& it: coins)
        cin >> it;

    vll dp(x+1, INT64_MAX);
    dp[0] = 0;

    for (int i = 0; i <= x; i++)
    {
        ll z = dp[i];
        if (z == INT64_MAX) continue;
        z++;
        for (const ll c: coins)
            if (i+c <= x)
                dp[i+c] = min(dp[i+c], z);
    }

    if (dp[x] == INT64_MAX)
        cout << -1;
    else
        cout << dp[x];


}
