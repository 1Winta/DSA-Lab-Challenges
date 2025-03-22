#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount;

        // Count occurrences of each character
        for (char c : s) {
            charCount[c]++;
        }

        // Find the first unique character
        for (int i = 0; i < s.length(); i++) {
            if (charCount[s[i]] == 1) {
                return i; // Return the index of the first unique character
            }
        }

        return -1; // If no unique character exists
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string s1 = "leetcode";
    cout << "Input: " << s1 << ", Output: " << solution.firstUniqChar(s1) << endl; // Output: 0

    // Test Case 2
    string s2 = "loveleetcode";
    cout << "Input: " << s2 << ", Output: " << solution.firstUniqChar(s2) << endl; // Output: 2

    // Test Case 3
    string s3 = "aabb";
    cout << "Input: " << s3 << ", Output: " << solution.firstUniqChar(s3) << endl; // Output: -1

    return 0;
}