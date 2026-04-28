class Solution {
public:
    bool canJump(vector<int>& nums) {
        int each = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > each) return false;  
            each = max(each, i + nums[i]);
        }
        return true;
    }
};
