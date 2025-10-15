#include <bits/stdc++.h>

using namespace std;

#define fast_io  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define vll vector<long long>

// O(nlogn)
int main()
{
    int n;
    vector<pair<int,int>> festivals;
    fast_io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        festivals.emplace_back(b, a);
    }
    sort(festivals.begin(), festivals.end());
    int movies = 1, current_time = festivals[0].first;
    for (int i = 1; i < n; i++)
        if (festivals[i].second >= current_time)
        {
            movies++;
            current_time = festivals[i].first;
        }
    cout << movies;
}
