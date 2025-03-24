#include <bits/stdc++.h>  // Include all standard C++ libraries
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Sort both arrays to use the two-pointer approach
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result; // To store the unique intersection elements
        int i = 0, j = 0;   // Two pointers for traversing nums1 and nums2

        // Step 2: Traverse both arrays simultaneously
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                // If nums1[i] is smaller, move pointer i to the right
                i++;
            } 
            else if (nums1[i] > nums2[j]) {
                // If nums2[j] is smaller, move pointer j to the right
                j++;
            } 
            else { 
                // If both elements are equal, it is a common element
                // Ensure uniqueness by checking if the last inserted element is different
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]); // Store unique intersection element
                }
                // Move both pointers forward to check the next elements
                i++; 
                j++; 
            }
        }
        return result; // Return the final intersection array
    }
};

// Driver code to take input and call the function
int main() {
    int n, m;
    cin >> n; // Read size of the first array
    vector<int> nums1(n);
    for (int i = 0; i < n; i++) cin >> nums1[i]; // Read elements of nums1

    cin >> m; // Read size of the second array
    vector<int> nums2(m);
    for (int i = 0; i < m; i++) cin >> nums2[i]; // Read elements of nums2

    Solution obj;
    vector<int> result = obj.intersection(nums1, nums2); // Get the intersection result

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
