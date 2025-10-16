#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

int main()
{
    fast_io;
    int n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a.emplace_back(z, i+1);
    }
    sort(a.begin(), a.end());
    ll left_ptr = 0, right_ptr = n-1;
    while (left_ptr < right_ptr)
    {
        ll y = a[left_ptr].first + a[right_ptr].first;
        if (y == x)
        {
            cout << a[left_ptr].second << " " << a[right_ptr].second;
            return 0;
        }
        if (y > x)
            right_ptr--;
        else
            left_ptr++;
    }
    cout << "IMPOSSIBLE";
}
