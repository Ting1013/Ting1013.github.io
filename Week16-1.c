// Week16-1.cpp
// LeetCode 3403. Find the Lexicographically Largest String From the Box I

class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) return word;

        int N = word.length();
        int M = N - (numFriends - 1);
        string ans = word.substr(0, M);

        for (int i = 1; i <= N - M; i++) {
            ans = max(ans, word.substr(i, M));
        }

        return ans;
    }
};
