#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int testCase;

    cin >> testCase;

    double number;

    for (int i = 0; i < testCase; i++)
    {
        cin >> number;

        if (i > 0)

            if (sqrt(8.0 * number - 7) == (int)sqrt(8.0 * number - 7)) //  From triangle number formula
                                                                       //  checking if the sqrt is a perfect square
                cout << " 1";

            else

                cout << " 0";

        else if (sqrt(8.0 * number - 7) == (int)sqrt(8.0 * number - 7))

            cout << "1";

        else

            cout << "0";
    }

    return 0;
}