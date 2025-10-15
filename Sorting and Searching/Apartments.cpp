#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_studio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define vll vector<long long>

int n, m, k;
vll a, b;

int main()
{
    cin >> n >> m >> k;
    a.resize(n);
    for (auto& it: a)
        cin >> it;
    b.resize(m);
    for (auto& it: b)
        cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ptr_a = 0, ptr_b = 0, ans = 0;
    while (ptr_a < n && ptr_b < m)
    {
        if (abs(a[ptr_a] - b[ptr_b]) <= k)
        {
            ans++;
            ptr_a++;
            ptr_b++;
        }
        else if (a[ptr_a] > b[ptr_b] + k)
            ptr_b++;
        else
            ptr_a++;
    }
    cout << ans;
}
