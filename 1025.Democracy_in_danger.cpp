#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int t;
    cin >> t;

    int sz[101];

    for (size_t i = 0; i < t; i++)
        cin >> sz[i];

    sort(sz, sz + t);

    int ans = 0;

    for (size_t i = 0; 2 * i < t; i++)
        ans += (sz[i] + 2) / 2;

    cout << ans;

    return 0;
}