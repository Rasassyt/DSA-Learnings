// MOVE ALL ZEROS TO THE END OF THE ARRAY
#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

class Solution {
public:
    // Function to move all zeros to the end while maintaining order of non-zero elements
    void moveZeros(vector<int>& nums) {
        int n = nums.size(); // Get the size of the array
        int left = 0; // Pointer to track the position where the next non-zero should be placed

        // Iterate through the array using a right pointer
        for (int right = 0; right < n; right++) {
            if (nums[right] != 0) { // If the current element is non-zero
                swap(nums[left], nums[right]); // Swap with the left pointer position
                left++; // Move the left pointer ahead
            }
        }
    }
};

int main() {
    int n;
    cin >> n; // Input the size of the array
    vector<int> nums(n); // Declare a vector of size n

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.moveZeros(nums); // Call function to move zeros to the end

    // Print the modified array after shifting zeros
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
