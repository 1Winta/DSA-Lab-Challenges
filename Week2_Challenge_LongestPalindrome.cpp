#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;
        
        // Count occurrences of each character
        for (char c : s) {
            charCount[c]++;
        }
        
        int length = 0;
        bool hasOddCount = false;

        // Calculate the maximum length of the palindrome
        for (const auto& pair : charCount) {
            if (pair.second % 2 == 0) {
                length += pair.second; // Add even counts directly
            } else {
                length += pair.second - 1; // Add odd counts minus one
                hasOddCount = true; // Mark that we have at least one odd count
            }
        }

        // If there's at least one character with an odd count, we can add 1 to the length
        if (hasOddCount) {
            length += 1;
        }

        return length;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string s1 = "abccccdd";
    cout << "Input: " << s1 << ", Output: " << solution.longestPalindrome(s1) << endl; // Output: 7

    // Test Case 2
    string s2 = "a";
    cout << "Input: " << s2 << ", Output: " << solution.longestPalindrome(s2) << endl; // Output: 1

    return 0;
}