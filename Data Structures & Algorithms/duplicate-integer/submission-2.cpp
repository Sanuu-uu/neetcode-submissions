class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> visit;
        for(auto n:nums){
            visit.insert(n);
        }
        if(visit.size() != nums.size())
            return true;
        else
            return false;
    }
};