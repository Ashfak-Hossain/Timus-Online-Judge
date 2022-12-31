#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here
    vector<double> v;

    double n;

    while (cin >> n)
        v.push_back(n);

    for (int i = v.size() - 1; i >= 0; i--)
        cout << setprecision(4) << fixed << sqrt(v[i]) << endl;

    return 0;
}