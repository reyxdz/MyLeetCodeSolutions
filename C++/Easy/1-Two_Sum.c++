#include <vector>

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int length = nums.size();

            for(int i = 0; i < length; i++){
                for(int j = i + 1; j < length; j++){
                    if(nums[i] + nums[j] == target){
                        return {i, j};
                    }
                }
            }

            return {};
        }
};