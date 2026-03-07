class Solution {
public:
    int lengthOfLastWord(string s) {
       int n = s.length();
        int count = 0;
        for(int i = n - 1; i >= 0; i--) {

            if(s[i] == ' ' && count == 0) {
                continue;          // ignore spaces at the end
            }

            if(s[i] != ' ') {
                count++;           // count characters
            }
            else {
                break;             // stop when space appears
            }
        }
        return count;
    }
};