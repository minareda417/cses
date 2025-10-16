#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

// O(n)
int main()
{
    fast_io;
    int n;
    cin >> n;
    vll x(n);
    for (auto& it: x)
        cin >> it;
    ll current = x[0], ans = x[0];
    /* +ve + +ve -> extend
     * +ve + -ve -> extend
     * -ve + +ve -> new array
     * -ve + -ve -> new array
     * Conclusion: If current is negative, start new count. Else, continue counting
     */
    for (int i = 1; i < n; i++)
    {
        current = max(x[i]+current, x[i]);
        ans = max(ans, current);
    }
    cout << ans;
}
