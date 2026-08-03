class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int h = heights.size()-1;
        int maxA = 0;
        while(l<h){
            int curr = min(heights[l], heights[h]) * (h-l);
            maxA = max(curr, maxA);
            if(heights[l] < heights[h]){
                l++;
            }else {
                h--;
            }
        }
        return maxA;
    }
};
