#include <bits/stdc++.h>

using namespace std;

#define fast_io     ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define MOD static_cast<ll>(1e9+7)


int main()
{
    fast_io;
    int n;
    cin >> n;
    vvc grid(n, vc(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    if (grid[0][0] == '*')
    {
        cout << 0;
        return 0;
    }
    vvll dp(n, vll(n, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            const ll x = dp[i][j];
            if (x == 0) continue;
            if (i != n-1 && grid[i+1][j] != '*')
                dp[i+1][j] = (dp[i+1][j] % MOD + x % MOD) % MOD;
            if (j != n-1 && grid[i][j+1] != '*')
                dp[i][j+1] = (dp[i][j+1] % MOD + x % MOD) % MOD;
        }

    cout << dp[n-1][n-1];
    return 0;
}
