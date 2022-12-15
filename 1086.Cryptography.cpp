#include <bits/stdc++.h>

using namespace std;

#define MAX_N 165000

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool isPrime[MAX_N];

    int ans[15000], sz;

    memset(isPrime, true, sizeof(isPrime));

    memset(isPrime, false, 2);

    ans[0] = 2;
    sz = 1;

    for (int i = 3; i < MAX_N && sz < 15000; i += 2)
    {

        if (isPrime[i])
        {

            ans[sz] = i;
            ++sz;

            if (i < MAX_N / i)

                for (int j = i * i; j < MAX_N; j += i)

                    isPrime[j] = false;
        }
    }

    int T, ind;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &ind); // 3

        printf("%d\n", ans[ind - 1]); // 2
    }

    return 0;
}