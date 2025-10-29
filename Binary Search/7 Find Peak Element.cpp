#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:  
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0, e = n - 1;
        int m = s + (e - s) / 2;

        while (s < e) {
            if (nums[m] < nums[m + 1])
                s = m + 1;
            else
                e = m;
            m = s + (e - s) / 2;
        }
        return s;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    cout << "Peak element index: " << sol.findPeakElement(nums) << endl;
    return 0;
}
