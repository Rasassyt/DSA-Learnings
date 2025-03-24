#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the maximum sum subarray using Kadane's Algorithm
    int maxSubArray(vector<int>& nums) {
        // Initialize maxSum with the first element of the array
        int maxSum = nums[0];

        // Variable to store the sum of the current subarray
        int currentSum = nums[0];

        // Loop through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Either start a new subarray with nums[i] or extend the previous subarray
            currentSum = max(nums[i], currentSum + nums[i]);

            // Update maxSum if currentSum is greater
            maxSum = max(maxSum, currentSum);
        }

        // Return the maximum subarray sum found
        return maxSum;
    }
};

int main() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> nums(n); // Declare an array of size n

    // Read n elements into the array
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj; // Create an object of the Solution class
    cout << obj.maxSubArray(nums) << endl; // Call the function and print the result

    return 0;
}
