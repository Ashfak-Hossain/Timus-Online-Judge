#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here
    int N;
    cin >> N;
    char v;
    int h, c = 0;
    vector<int> result;
    while (N--)
    {
        cin >> v >> h;
        v = v - 'a' + 1;
        if (h > 1 && v > 2)
            c += 1;
        if (h > 1 && v < 7)
            c += 1;
        if (h > 2 && v > 1)
            c += 1;
        if (h > 2 && v < 8)
            c += 1;

        if (h < 8 && v > 2)
            c += 1;
        if (h < 8 && v < 7)
            c += 1;
        if (h < 7 && v > 1)
            c += 1;
        if (h < 7 && v < 8)
            c += 1;

        result.push_back(c);
        c = 0;
    }
    copy(result.begin(), result.end(), ostream_iterator<int>(cout, "\n"));

    return 0;
}