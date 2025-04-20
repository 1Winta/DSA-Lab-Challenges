#include <iostream>
#include <string>
#include <algorithm> 

class Solution {
public:
    bool isPalindrome(int x) {
       
        if (x < 0) {
            return false;
        }

        std::string str_x = std::to_string(x);

        std::string reversed_str_x = str_x;
        std::reverse(reversed_str_x.begin(), reversed_str_x.end());

        return str_x == reversed_str_x;
    }
};

int main() {
    Solution sol;

    // Test cases
    std::cout << "121 is palindrome: " << sol.isPalindrome(121) << std::endl;   // Output: true
    std::cout << "-121 is palindrome: " << sol.isPalindrome(-121) << std::endl;  // Output: false
    std::cout << "10 is palindrome: " << sol.isPalindrome(10) << std::endl;    // Output: false
    std::cout << "0 is palindrome: " << sol.isPalindrome(0) << std::endl;     // Output: true
    std::cout << "12321 is palindrome: " << sol.isPalindrome(12321) << std::endl; // Output: true

    return 0;
}