#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < j;) {
            swap(s[i++], s[j--]);
        }
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s1);
    cout << "Output: [";
    for (int i = 0; i < s1.size(); ++i) {
        cout << "'" << s1[i] << "'";
        if (i < s1.size() - 1) cout << ", ";
    }
    cout << "]" << endl; // Output: ["o","l","l","e","h"]

    // Example 2
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    solution.reverseString(s2);
    cout << "Output: [";
    for (int i = 0; i < s2.size(); ++i) {
        cout << "'" << s2[i] << "'";
        if (i < s2.size() - 1) cout << ", ";
    }
    cout << "]" << endl; // Output: ["h","a","n","n","a","H"]

    return 0;
}