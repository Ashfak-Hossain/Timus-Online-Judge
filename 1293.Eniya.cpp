#include <bits/stdc++.h>

using namespace std;

/*বাচ্চা লেভেলের একটা প্রশ্ন । তোমায় , একটা আয়তাকার - প্যানেল দেয়া আছে , যার দৈ্ঘ্য ও প্রস্থ
A & B meters দেয়া আছে , ধরো - বলা আছে যে - প্যানেলটি'র ১ বর্গএকক রঙ করতে ১
ন্যানোগ্রাম রং লাগে । তাহলে , প্যানেলটির উভয় পাশে রঙ করতে কতটুকু রঙ লাগবে ??
তাহলে , আয়তাকার প্যানেলটির ক্ষেত্রফলের সমান রঙ লাগবে , বুঝাই যাচ্ছে ও যেহেতু - দুই পাশে বলেছে - সুতরাং ২ দিয়ে গুণ করতে হবে । তাহলে , ১ টা প্যানেলের উভয় পাশে রঙ করতে লাগবে -
2*A*B ন্যনোগ্রাম রঙ , তাই না ?? এখন , প্যানেলের সংখ্যাও দেয়া থাকবে - সুতরাং , সেটা দিয়ে 2*A*B কে গুণ করলেই , মোট পরিমাণ পাওয়া যাবে */

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int N, a, b;

    cin >> N >> a >> b;

    int sum = 2 * N * a * b;

    cout << sum << endl;

    return 0;
}