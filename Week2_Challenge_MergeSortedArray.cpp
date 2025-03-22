#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m - 1, j = n - 1, k = m + n - 1; j >= 0; --k) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i--];
            } else {
                nums1[k] = nums2[j--];
            }
        }
    }
};

void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1_1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2_1 = {2, 5, 6};
    int m1 = 3, n1 = 3;
    solution.merge(nums1_1, m1, nums2_1, n1);
    printArray(nums1_1); // Output: [1, 2, 2, 3, 5, 6]

    // Test Case 2
    vector<int> nums1_2 = {1};
    vector<int> nums2_2 = {};
    int m2 = 1, n2 = 0;
    solution.merge(nums1_2, m2, nums2_2, n2);
    printArray(nums1_2); // Output: [1]

    // Test Case 3
    vector<int> nums1_3 = {0};
    vector<int> nums2_3 = {1};
    int m3 = 0, n3 = 1;
    solution.merge(nums1_3, m3, nums2_3, n3);
    printArray(nums1_3); // Output: [1]

    return 0;
}