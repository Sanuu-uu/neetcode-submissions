class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_set<char> st;
        int l = 0;
        int r = 0;
        while(r < s.size()){
            if(!st.contains(s[r])){
                st.insert(s[r]);
                ans = max(ans, r - l + 1);
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};
