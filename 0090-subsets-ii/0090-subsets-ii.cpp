class Solution {
public:
    vector<vector<int>> result;
    void backtrack(vector<int>& nums, int index, vector<int>& subset) {
        result.push_back(subset);
        for (int i = index; i < nums.size(); i++) {
            if (i > index && nums[i] == nums[i - 1])
                continue;

            subset.push_back(nums[i]);
            backtrack(nums, i + 1, subset);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> subset;
        backtrack(nums, 0, subset);
        return result;
    }
};