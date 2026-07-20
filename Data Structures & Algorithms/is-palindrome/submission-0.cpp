class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char c: s){
            if(isalnum(c)){
                str += tolower(c);
            }
        }
        string rev(str.rbegin(), str.rend());
        if(rev == str){
            return true;
        }
        else{
            return false;
        }
    }
};
