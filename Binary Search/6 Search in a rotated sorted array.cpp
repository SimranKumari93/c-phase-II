#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getPivot(vector<int>& nums, int n) {
        int s = 0, e = n - 1;
        int m = s + (e - s) / 2;

        while (s < e) {
            if (nums[m] >= nums[0]) {
                s = m + 1;
            } else {
                e = m;
            }
            m = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target)
                return m;
            if (nums[m] < target)
                s = m + 1;
            else
                e = m - 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums, n);

        if (target >= nums[pivot] && target <= nums[n - 1])
            return binarySearch(nums, pivot, n - 1, target);
        else
            return binarySearch(nums, 0, pivot - 1, target);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = sol.search(nums, target);
    cout << "Target found at index: " << index << endl;

    return 0;
}
