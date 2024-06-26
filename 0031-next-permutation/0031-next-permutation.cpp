class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        
        // Find the largest index ind such that nums[ind] < nums[ind + 1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        
        // If no such index exists, the permutation is the last permutation
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            // Find the largest index j > ind such that nums[ind] < nums[j]
            for (int i = n - 1; i > ind; i--) {
                if (nums[i] > nums[ind]) {
                    swap(nums[i], nums[ind]);
                    break;
                }
            }
            // Reverse the sequence from ind + 1 to the end
            reverse(nums.begin() + ind + 1, nums.end());
        }
        
        // Print the result for debugging purposes
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};