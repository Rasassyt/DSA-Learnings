//find the subarray with maximum sum

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxsubarray(vector<int>& nums){
        int n = nums.size();
        int maxSum = nums[0];
        int currentSum = nums[0];

        for(int i = 1 ; i < n; i++){
            currentSum = max(nums[i] , currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    } 
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    Solution obj;
    cout<< obj.maxsubarray(nums) << endl;

    return 0;
}