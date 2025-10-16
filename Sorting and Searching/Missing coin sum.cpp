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
    vll x(n);
    for (auto& it: x)
        cin >> it;
    sort(x.begin(), x.end());
    ll current_sum = 1;
    for (ll c: x)
    {
        if (c > current_sum)
            break;
        current_sum += c;
    }
    cout << current_sum;
}
