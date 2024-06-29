class Solution {
public:
    int reverse(int x) { 
        long reversed = 0, remainder, temp = x;
        while (temp != 0) {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp /= 10;
        }
       
        if (reversed < INT_MIN || reversed > INT_MAX) {
            return 0; // handle overflow case
        }
        return reversed;
    }
};