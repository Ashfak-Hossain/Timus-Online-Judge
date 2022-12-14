#include <bits/stdc++.h>

using namespace std;

/*টাইমাস অনলাইন জাজ এর প্রশ্নগুলো - সলভ করতে বেশ মজাই লাগবে,
যদি - তুমি বুঝতে পারো ? ? না হলে, মাথা খারাপ হয়ে যাবে ।
এটা, খুবই সহজ একটি সহজ একটি প্রোবলেম - তোমায় একটা সংখ্যা ও কয়েকটি ' ! ' চিহ্ন দেয়া থাকবে ।
কয়টি, !চিহ্ন দেয়া থাকবে-- সেটার উপর, তোমার ধারাটি কেমন হবে ? সেটা ডিপেন্ড করবে ? ?
যেমন যদি 10 !!!দেয়া থাকে, তাহলে তোমায় গুণ করতে হবে 10·7·4·1 ।
কিন্তু, যদি - 10 !!দেয়া থাকে, তাহলে - তোমায়, 10.8.6.4.2 |
অর্থাৎ, যে কয়টা !চিহ্ন থাকবে - ঠিক তত করে, দেয়া সংখ্যা থেকে কমিয়ে কমিয়ে - গুণ করতে হবে
যতক্ষণ না, ১ এর সমান অথবা, এর চেয়ে এক ধাপ বড়'তে না থামে ।
*/

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int number, totalExcla, ans{1};

    string excla;

    cin >> number >> excla;

    totalExcla = excla.size();

    while (number > 0)
    {
        ans *= number;

        number -= totalExcla;
    }

    cout << ans << endl;

    return 0;
}