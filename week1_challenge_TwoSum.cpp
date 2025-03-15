#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> d; // Map to store number and its index
        for (int i = 0; i < nums.size(); ++i) { // Loop through the array
            int x = nums[i]; // Current number
            int y = target - x; // Required complement
            if (d.find(y) != d.end()) { // Check if complement exists
                return {d[y], i}; // Return indices if found
            }
            d[x] = i; // Store the current number and its index
        }
        return {}; // Return empty vector if no solution found
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 9; // Example target
    vector<int> result = solution.twoSum(nums, target);
    
    // Print the result
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    
    return 0; // Indicate successful completion
}