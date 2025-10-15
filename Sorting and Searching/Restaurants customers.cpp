#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

int n;
vll a, b;

// O(n)
int main()
{
    fast_io;
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ptr_a = 0, ptr_b = 0;
    int ans = 0, current = 0;
    while (ptr_a < n && ptr_b < n)
    {
        if (a[ptr_a] < b[ptr_b])
        {
            current++;
            ans = max(ans, current);
            ptr_a++;
        }
        else
        {
            ptr_b++;
            current--;
        }
    }
    cout << ans;
}
