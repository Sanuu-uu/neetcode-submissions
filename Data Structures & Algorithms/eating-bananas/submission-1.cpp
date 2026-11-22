class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while(l <= r){
            int mid = (l + r) / 2;
            long long totalTime = 0;
            for(int p: piles){
                totalTime += (p + mid - 1) / mid;
            }
            if(totalTime <= h){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};
