#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

int main()
{
    fast_io;
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto& it: p)
        cin >> it;
    /* O(nlogn)
    sort(p.begin(), p.end());
    */
     // O(n)
    nth_element(p.begin(), p.begin() + n/2, p.end());

    const int median = p[n/2];

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += abs(p[i]-median);
    cout << ans;
}
