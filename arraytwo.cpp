#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();  // The size of the given array
        int expectedSum = (n * (n + 1)) / 2;  // Sum of numbers from 0 to n
        int actualSum = accumulate(nums.begin(), nums.end(), );  // Sum of elements in the array
        return expectedSum - actualSum;  // The missing number
    }
};

int main() {
    int n;
    cin >> n;  // Read the number of elements (n)

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];  // Read the array elements
    }

    Solution obj;
    cout << obj.missingNumber(nums) << endl;  // Output the missing number

    return 0;
}
