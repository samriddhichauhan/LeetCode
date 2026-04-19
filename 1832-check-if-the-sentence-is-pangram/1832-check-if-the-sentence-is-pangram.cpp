class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> seen;

        for (char ch : sentence) {
            seen.insert(ch);
        }

        return seen.size() == 26;
    }
};
