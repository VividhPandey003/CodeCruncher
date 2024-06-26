#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> soln;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((nums[i] + nums[j]) == target) {
                    soln.push_back(i);
                    soln.push_back(j);
                    return soln;
                }
            }
        }
        // In case no solution is found, return an empty vector or handle the case as required.
        return soln;
    }
};
