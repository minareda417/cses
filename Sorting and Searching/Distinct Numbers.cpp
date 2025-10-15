#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_studio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define vll vector<long long>

int n;
set<ll> x;

// O(nlogn)
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.insert(t);
    }
    cout << x.size();
}
