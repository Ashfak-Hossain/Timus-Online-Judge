#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

// function prototype
int pow(int, int);

int digitSum(int);

int n;

int mem[38];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    cin >> n;

    for (size_t i = 0; i < pow(10, n / 2); i++)
    {
        int s = digitSum(i);
        mem[s]++;
    }

    int ans = 0;

    for (size_t i = 0; i < pow(10, n / 2); i++)
    {
        int s = digitSum(i);
        ans += mem[s];
    }

    cout << ans << endl;

    return 0;
}

int pow(int a, int x)
{
    int ret = 1;

    for (size_t i = 0; i < x; i++)
    {
        ret *= a;
    }
    return ret;
}

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}