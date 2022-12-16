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

    long number{0};
    long double sqrtAns{0};
    double test{0};

    for (size_t i = 0; i < testCase; i++)
    {
        cin >> number;

        sqrtAns = sqrt(8 * number - 7); // From triangle number formula

        if (modf(sqrtAns, &test) == 0) // the modf function to check if the sqrt is a perfect square
            cout << "1 ";
        else
            cout << "0 ";
    }

    return 0;
}