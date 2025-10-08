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
    ll n, m;
    cin >> n >> m;
    vll a(n);
    for (auto& it: a)
        cin >> it;
    vll dp(n, 0);
    if (a[0] != 0)
        dp[0] = 1;
    else
    {
        int x = a[1];
    }
    return 0;
}