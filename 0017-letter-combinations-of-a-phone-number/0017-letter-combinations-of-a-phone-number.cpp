class Solution {
public:
    vector<string> result;
    void backtrack(int index, string digits, string path, unordered_map<char, string>& phone) {
        if (index == digits.size()) {
            result.push_back(path);
            return;
        }
        string letters = phone[digits[index]];
        for (char ch : letters) {
            backtrack(index + 1, digits, path + ch, phone);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        unordered_map<char, string> phone = {
            {'2',"abc"}, {'3',"def"},
            {'4',"ghi"}, {'5',"jkl"},
            {'6',"mno"}, {'7',"pqrs"},
            {'8',"tuv"}, {'9',"wxyz"}
        };
        backtrack(0, digits, "", phone);
        return result;
    }
};