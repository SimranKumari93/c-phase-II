#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

    

class Solution {
public:
    int binarySearch( vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target) return m;
            else if (nums[m] < target) s = m + 1;
            else e = m - 1;
        }
        return -1;
    }

    bool search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target) return true;

            // if we can't decide which side is sorted (due to duplicates)
            if (nums[s] == nums[m] && nums[m] == nums[e]) {
                s++;
                e--;
            }
            // left half is sorted
            else if (nums[s] <= nums[m]) {
                if (nums[s] <= target && target < nums[m])
                    e = m - 1;
                else
                    s = m + 1;
            }
            // right half is sorted
            else {
                if (nums[m] < target && target <= nums[e])
                    s = m + 1;
                else
                    e = m - 1;
            }
        }
        return false;
    }
};
