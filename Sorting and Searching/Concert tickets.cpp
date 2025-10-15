#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<long long, int>>

// O(nlogn)
/*
This problem shows the importance of multiset data structure. It is similar to set bt can contain
multiple instances of the same number.
*/

int main()
{
    int n, m;
    multiset<ll> h;
    vll t;
    fast_io;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        h.insert(x);
    }
    t.resize(m);
    for (auto& it: t)
        cin >> it;
    for (int i = 0; i < m; i++)
    {
        auto it = h.upper_bound(t[i]);
        if (it == h.begin())
            cout << "-1\n";
        else
        {
            --it;
            cout << *it << "\n";
            h.erase(it);
        }
    }
}
