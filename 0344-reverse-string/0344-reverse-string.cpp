class Solution {
public:
    void reverseString(vector<char>& s) {
      vector<char> arr(s.begin(), s.end());
        reverse(arr.begin(), arr.end());
        s = arr; 
    }
};