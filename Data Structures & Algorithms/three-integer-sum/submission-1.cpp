class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0)
                break;
            if(i > 0 && (nums[i] == nums[i - 1])){
                continue;
            }
            int l = i + 1, h = nums.size() - 1;
            while(l < h){
                int sum = nums[i] + nums[l] + nums[h];
                if(sum > 0){
                    h--;
                }else if(sum < 0){
                    l++;
                }else{
                    ans.push_back({nums[i], nums[l], nums[h]});
                    l++;
                    h--;
                    while(l < h && nums[l] == nums[l-1]){
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};
