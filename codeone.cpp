//SECOND LARGEST ELEMENT IN ARRAY


#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

class Solution {
public:
    // Function to return the second largest element in the array
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size(); 
        
        // Sort the array in ascending order
        sort(arr.begin(), arr.end()); 
        
        // Traverse from the second last element (largest is at the end)
        for (int i = n - 2; i >= 0; i--) { 
            // If the current element is smaller than the largest element, return it
            if (arr[i] != arr[n - 1]) {
                return arr[i];
            }
        }
        
        // If all elements are the same, return -1
        return -1;
    }
};

int main() {
    int n;
    cin >> n; // Input: size of the array
    vector<int> arr(n); // Declare a vector of size n

    // Take array input
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    Solution obj; // Create an instance of the Solution class
    cout << obj.getSecondLargest(arr) << endl; // Call function and print the result

    return 0; // Indicate successful program termination
}
