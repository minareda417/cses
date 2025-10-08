#include <bits/stdc++.h>

using namespace std;

#define fast_io     ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

#define MOD static_cast<ll>(1e9+7)

int main()
{
    fast_io;
    int n;
    cin >> n;

    vll dp(n+1, 0);
    dp[0] = 1;

    for (int i = 0; i <= n; i++)
    {
        ll x = dp[i];
        for (int j = i+1; j < min(n+1, i+7); j++)
            dp[j] = (dp[j]% MOD + x% MOD)% MOD;

    }

    cout << dp[n];

}
