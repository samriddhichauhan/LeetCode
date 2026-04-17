class Solution {
public:
    vector<vector<int>> result;
    void backtrack(int start, int k, int n, vector<int>& curr) {
        if (curr.size() == k && n == 0) {
            result.push_back(curr);
            return;
        }
        if (curr.size() > k || n < 0) return;

        for (int i = start; i <= 9; i++) {
            curr.push_back(i);
            backtrack(i + 1, k, n - i, curr); 
            curr.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        backtrack(1, k, n, curr);
        return result;
    }
};
