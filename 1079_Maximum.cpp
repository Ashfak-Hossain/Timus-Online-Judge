#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int a[100010];
    a[0] = 0;
    a[1] = 1;

    for (int i = 0; i < 100000 / 2; i++)
    {
        a[2 * i] = a[i];
        a[2 * i + 1] = a[i] + a[i + 1];
    }

    int n;

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        int mx = 0;
        for (int i = 0; i <= n; i++)
        {
            mx = max(mx, a[i]);
        }
        cout << mx << endl;
    }

    return 0;
}