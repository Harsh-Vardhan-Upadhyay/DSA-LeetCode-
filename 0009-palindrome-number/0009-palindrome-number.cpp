class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int reverse = 0;
        int original = x;
        while (x != 0) {

            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && x % 10 > 7)) {
                return false;
            }

            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        return reverse == original;
    }
};