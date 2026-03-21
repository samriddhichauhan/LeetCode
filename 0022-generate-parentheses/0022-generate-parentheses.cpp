class Solution {
public:
    void helper(vector<string>& ans, string result, int n, int open, int close) {
        if (result.length() == 2 * n) {
            ans.push_back(result);
            return;
        }
        if (open < n) {
            helper(ans, result + '(', n, open + 1, close);
        }
        if (close < open) {
            helper(ans, result + ')', n, open, close + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans, "", n, 0, 0);
        return ans;
    }
};
