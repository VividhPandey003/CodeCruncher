class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = preprocess(s);
        return isPalindromeRecur(filtered, 0, filtered.size() - 1);
    }

    bool isPalindromeRecur(const string& s, int left, int right) {
        if (left >= right) {
            return true; // Base case: If left index is greater than or equal to right, it's a palindrome
        }
        if (s[left] != s[right]) {
            return false; // If characters at left and right don't match, it's not a palindrome
        }
        return isPalindromeRecur(s, left + 1, right - 1); // Recur for the remaining substring
    }

    string preprocess(const string& s) {
        string res;
        for (char c : s) {
            if (isalnum(c)) {
                res.push_back(tolower(c)); // Convert to lowercase and keep alphanumeric characters
            }
        }
        return res;
    }
};