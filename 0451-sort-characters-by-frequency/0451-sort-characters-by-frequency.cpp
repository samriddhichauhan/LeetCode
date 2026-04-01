class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        string str = "";
        for (char ch : s) {
            if (freq[ch]) {
                freq[ch] += 1;
            } else {
                freq[ch] = 1;
            }
        }
        vector<pair<char, int>> temp(freq.begin(), freq.end());

        sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        for (auto ch : temp) {
            str += string(ch.second, ch.first);
        }

        return str;
    }
};
