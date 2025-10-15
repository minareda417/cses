#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

int n, x;
vll weights;

// O(nlogn)
int main()
{
    fast_io;
    cin >> n >> x;
    weights.resize(n);
    for (auto& it: weights)
        cin >> it;
    sort(weights.begin(), weights.end());
    ll ans = n;
    int ptr_l = 0, ptr_r = n-1;
    while (ptr_l < ptr_r)
    {
        ll s = weights[ptr_l] + weights[ptr_r];
        if (s <= x)
        {
            ans--;
            ptr_l++;
            ptr_r--;
        }
        else if (s > x)
            ptr_r--;
    }
    cout << ans;
}
