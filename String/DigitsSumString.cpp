// s = "zbax", k = 2
// Convert: "zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124
// Transform #1: 262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17
// Transform #2: 17 ➝ 1 + 7 ➝ 8

int getLucky(string s, int k) {
    int sum = 0, sum1 = 0;
    for (auto ch : s) {
        int n = ch - 'a' + 1;
        sum += n / 10 + n % 10;
    }
    while (--k > 0 && sum > 9) {
        for (; sum; sum /= 10)
            sum1 += sum % 10;
        swap(sum, sum1);
    }
    return sum;
}

// https://leetcode.com/problems/sum-of-digits-of-string-after-convert/