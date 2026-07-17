class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans[0] = j;
                    ans[1] = i;
                    break;
                }
            }
        }
        return ans;
    }
};
