// 1281. Subtract the Product and Sum of Digits of an Integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//
// Difficulty: Easy        Topic: Math
//
// Approach: take digits one at a time with n % 10 and drop them with n / 10,
// keeping a running product and sum.
//
// Time:  O(d)  where d is the number of digits (at most 6 here)
// Space: O(1)
#include <cassert>
#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;
    }
};

int main() {
    Solution sol;

    assert(sol.subtractProductAndSum(234) == 15);   // 24 - 9
    assert(sol.subtractProductAndSum(4421) == 21);  // 32 - 11
    assert(sol.subtractProductAndSum(1) == 0);      // 1 - 1
    assert(sol.subtractProductAndSum(105) == -6);   // 0 - 6

    std::cout << "All tests passed" << std::endl;
    return 0;
}
