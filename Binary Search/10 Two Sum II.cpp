// Given an array nums of integers and integer k, return the maximum sum such that there exists i < j with nums[i] + nums[j] = sum and sum < k. If no i, j exist satisfying this equation, return -1.
 
// Example 1:
// Input: nums = [34,23,1,24,75,33,54,8], k = 60
// Output: 58
// Explanation: We can use 34 and 24 to sum 58 which is less than 60.

// Example 2:
// Input: nums = [10,20,30], k = 15
// Output: -1
// Explanation: In this case it is not possible to get a pair sum less that 15.

 
// Constraints:
// 1 <= nums.length <= 100
// 1 <= nums[i] <= 1000
// 1 <= k <= 2000

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:

    int twoSum(vector<int> nums, int k){

        sort(nums.begin(), nums.end());
        int ans = -1;
        int s = 0, e = nums.size() - 1;

        while(s < e){
            int sum = nums[s] + nums[e];
          if(sum < k){
                return max(ans,sum); 
                s++;
            }else{
            return ans;
            e--;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;

  vector<int> nums = [34,23,1,24,75,33,54,8];
    int k = 60 ;

    cout<< sol.twoSum(nums, k) <<endl;
    return 0;
}