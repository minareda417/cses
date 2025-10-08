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
    vll dp(n+1, INT64_MAX);
    dp[0] = 0;
    for (int i = 1; i < 10; i++)
        dp[i] = 1;
    for (int i = 10; i <= n; i++)
    {
        int x = i;
        while (x)
        {
            if (dp[i-x%10] != INT64_MAX)
                dp[i] = min(dp[i], 1+dp[i-x%10]);
            x /= 10;
        }
    }

    cout << dp[n];
    return 0;
}
