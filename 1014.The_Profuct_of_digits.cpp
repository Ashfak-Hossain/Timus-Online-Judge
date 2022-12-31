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

    if (N == 0)
        cout << "10" << endl;
    else if (N == 1)
        cout << "1" << endl;
    else
    {
        bool valid = true;
        string ans;

        while (valid && N != 1)
        {

            valid = false;

            for (size_t i = 9; i > 1; i--)
            {
                if (N % i == 0)
                {
                    valid = true;
                    ans += (char)('0' + i);
                    N /= i;
                    break;
                }
            }
        }

        reverse(ans.begin(), ans.end());

        if (!valid)
            cout << "-1";
        else
            cout << ans.c_str();
    }

    return 0;
}